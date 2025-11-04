"""
Evaluator for JPEG decoder latency using Verilator, following user's pipeline:

1) Replace src_v/jpeg_core.v with the evolved candidate (program_path).
2) cd jpeg_decoder/sim && make
3) cd jpeg_exp && ./run_on_50.sh
4) Parse 'jpeg_verilator_info' for per-image 'latency <int>' lines.
5) Objective: minimize average latency across the images.

Place this file in: openevolve/examples/jpeg_output_latency/

Assumed tree (from your screenshots):
examples/
  jpeg_output_latency/
    evaluator.py  <-- here
    jpeg_exp/
      50_imgs/
      jpeg_decoder/
        sim/            (Makefile here)
        src_v/
          jpeg_core.v   (original baseline)
      run_on_50.sh
      jpeg_verilator_info
"""

import os
import re
import shutil
import subprocess
import time
from pathlib import Path
from statistics import mean, median
from openevolve.evaluation_result import EvaluationResult


# --- Paths (relative to this evaluator.py location) ---
EXAMPLE_DIR = Path(__file__).resolve().parent
JPEG_EXP_DIR = EXAMPLE_DIR / "jpeg_exp"
SRC_V_DIR = JPEG_EXP_DIR / "jpeg_decoder" / "src_v"
SIM_DIR = JPEG_EXP_DIR / "jpeg_decoder" / "sim"
TARGET_V = SRC_V_DIR / "jpeg_core.v"
VERILATOR_INFO = JPEG_EXP_DIR / "jpeg_verilator_info"

# --- Tuning knobs ---
MAKE_TIMEOUT_S = 600         # generous build time
RUN_TIMEOUT_S = 900          # generous sim time for 50 images
EXPECTED_IMAGES = 50


def _run(cmd, cwd=None, timeout=None):
    """Run a shell command and capture output."""
    proc = subprocess.run(
        cmd,
        cwd=cwd,
        shell=isinstance(cmd, str),
        check=False,
        stdout=subprocess.PIPE,
        stderr=subprocess.STDOUT,
        text=True,
        timeout=timeout,
        env={**os.environ},
    )
    return proc.returncode, proc.stdout


def _parse_latencies(info_path: Path):
    """
    Parse lines like: 'latency 412488 position=590X306, exiting...'
    Return list[int].
    """
    if not info_path.exists():
        return []

    latencies = []
    pat = re.compile(r"\blatency\s+(-?\d+)\b", re.IGNORECASE)
    with info_path.open("r", errors="ignore") as f:
        for line in f:
            m = pat.search(line)
            if m:
                try:
                    latencies.append(int(m.group(1)))
                except ValueError:
                    continue
    return latencies


def _score_from_latencies(latencies):
    """
    Lower is better. We convert to a higher-is-better score.
    Use a robust transform to keep scores in (0,1].
    """
    if not latencies:
        return {
            "combined_score": 0.0,
            "avg_latency": None,
            "median_latency": None,
            "best_latency": None,
            "worst_latency": None,
            "count": 0,
        }

    avg_lat = float(mean(latencies))
    med_lat = float(median(latencies))
    best_lat = float(min(latencies))
    worst_lat = float(max(latencies))

    # Scoring: inverse scaling with a small stabilizer.
    combined = float(1.0 / (1.0 + max(0.0, avg_lat)))

    return {
        "combined_score": combined,
        "avg_latency": avg_lat,
        "median_latency": med_lat,
        "best_latency": best_lat,
        "worst_latency": worst_lat,
        "count": len(latencies),
    }


def evaluate(program_path):
    """
    program_path: path to the evolved Verilog candidate (OpenEvolve will pass this).
    We copy it over src_v/jpeg_core.v, build, run 50 images, and parse latencies.
    """
    start_time = time.time()

    # Safety: backup original and restore after run
    backup_path = TARGET_V.with_suffix(".v.bak")
    try:
        # Ensure src_v exists
        SRC_V_DIR.mkdir(parents=True, exist_ok=True)

        # Backup existing jpeg_core.v (if present)
        if TARGET_V.exists():
            shutil.copyfile(TARGET_V, backup_path)

        # Replace with candidate
        shutil.copyfile(program_path, TARGET_V)

        # 1) Build: cd sim && make
        rc_make, out_make = _run(["make", "-B"], cwd=SIM_DIR, timeout=MAKE_TIMEOUT_S)
        if rc_make != 0:
            artifacts = {
                "build_log_tail": out_make[-4000:],
                "error_type": "BuildFailure",
                "where": str(SIM_DIR),
            }
            return EvaluationResult(
                metrics={
                    "combined_score": 0.0,
                    "error": "Verilator build failed",
                },
                artifacts=artifacts,
            )

        # 2) Run: cd jpeg_exp && ./run_on_50.sh
        if VERILATOR_INFO.exists():
            try:
                VERILATOR_INFO.unlink()
            except Exception:
                pass

        run_cmd = "./run_on_50.sh"
        rc_run, out_run = _run(run_cmd, cwd=JPEG_EXP_DIR, timeout=RUN_TIMEOUT_S)
        if rc_run != 0:
            artifacts = {
                "run_log_tail": out_run[-4000:],
                "error_type": "RunFailure",
                "where": str(JPEG_EXP_DIR),
            }
            return EvaluationResult(
                metrics={
                    "combined_score": 0.0,
                    "error": "Simulation run failed",
                },
                artifacts=artifacts,
            )

        # 3) Parse jpeg_verilator_info
        latencies = _parse_latencies(VERILATOR_INFO)

        # Metrics
        stats = _score_from_latencies(latencies)
        reliability = float(min(1.0, len(latencies) / float(EXPECTED_IMAGES)))

        # Build final result
        metrics = {
            "combined_score": stats["combined_score"],
            "avg_latency": stats["avg_latency"] if stats["avg_latency"] is not None else 0.0,
            "median_latency": stats["median_latency"] if stats["median_latency"] is not None else 0.0,
            "best_latency": stats["best_latency"] if stats["best_latency"] is not None else 0.0,
            "worst_latency": stats["worst_latency"] if stats["worst_latency"] is not None else 0.0,
            "latency_count": stats["count"],
            "reliability_score": reliability,
        }

        artifacts = {
            "verilator_info_path": str(VERILATOR_INFO),
            "build_dir": str(SIM_DIR),
            "avg_latency": f"{stats['avg_latency']:.3f}" if stats["avg_latency"] is not None else "n/a",
            "median_latency": f"{stats['median_latency']:.3f}" if stats["median_latency"] is not None else "n/a",
            "best_latency": f"{stats['best_latency']:.3f}" if stats["best_latency"] is not None else "n/a",
            "worst_latency": f"{stats['worst_latency']:.3f}" if stats["worst_latency"] is not None else "n/a",
            "latencies_found": len(latencies),
        }

        return EvaluationResult(metrics=metrics, artifacts=artifacts)

    except Exception as e:
        return EvaluationResult(
            metrics={"combined_score": 0.0, "error": str(e)},
            artifacts={"error_type": type(e).__name__},
        )
    finally:
        # Always try to restore the original file to keep the workspace clean
        try:
            if backup_path.exists():
                shutil.copyfile(backup_path, TARGET_V)
                backup_path.unlink(missing_ok=True)
        except Exception:
            pass


# Stage evaluations (reuse the same pipeline to respect your fixed flow)
def evaluate_stage1(program_path):
    return evaluate(program_path)

def evaluate_stage2(program_path):
    return evaluate(program_path)