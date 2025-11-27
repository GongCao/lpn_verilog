"""
Evaluator for JPEG decoder latency and functional correctness using Verilator.

Pipeline:
1) Replace src_v/jpeg_core.v with the evolved candidate.
2) Build the simulation (cd jpeg_decoder/sim && make).
3) Run the simulation using 'run_verilator_decode.py'.
4) Verify functional correctness using 'decoder_verification.py'.
5) Parse 'jpeg_verilator_info' for latency metrics.
6) Objective: Minimize average latency, conditioned on functional correctness.
"""

import os
import re
import shutil
import sys
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

# Add jpeg_exp to sys.path to allow importing helper modules
sys.path.append(str(JPEG_EXP_DIR))

# Attempt to import verification logic
print(f"[DEBUG] Attempting to import decoder_verification from {JPEG_EXP_DIR}...")
try:
    import decoder_verification
    print("[DEBUG] Successfully imported decoder_verification.")
except ImportError as e:
    decoder_verification = None
    print(f"[DEBUG] Failed to import decoder_verification: {e}")

# --- Tuning knobs ---
MAKE_TIMEOUT_S = 600          # Generous build time
RUN_TIMEOUT_S = 2000          # Generous sim time for 50 images
EXPECTED_IMAGES = 4


def _run(cmd, cwd=None, timeout=None):
    """Run a shell command and capture output."""
    print(f"[DEBUG] Running command: {cmd} in cwd: {cwd}")
    start = time.time()
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
    duration = time.time() - start
    print(f"[DEBUG] Command finished in {duration:.2f}s with return code: {proc.returncode}")
    return proc.returncode, proc.stdout


def _parse_latencies(info_path: Path):
    """
    Parse lines like: 'latency 412488 position=590X306, exiting...'
    Return list[int].
    """
    print(f"[DEBUG] Parsing latencies from: {info_path}")
    if not info_path.exists():
        print(f"[DEBUG] Info file does not exist: {info_path}")
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
    print(f"[DEBUG] Found {len(latencies)} latency entries.")
    return latencies


def _score_from_latencies(latencies, is_correct):
    """
    Calculate score based on latency.
    If is_correct is False, return a penalty score (0.0).
    """
    print(f"[DEBUG] Calculating score. Count: {len(latencies)}, Correctness: {is_correct}")
    if not latencies or not is_correct:
        print("[DEBUG] Returning zero score (either no latencies or incorrect output).")
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

    # Scoring: inverse scaling. Lower latency = Higher score.
    # We use 1e6 as a numerator to keep numbers reasonable.
    combined = float(1_000_000.0 / (1.0 + avg_lat))
    print(f"[DEBUG] Avg Latency: {avg_lat:.2f}, Combined Score: {combined:.4f}")

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
    program_path: path to the evolved Verilog candidate.
    """
    print("=" * 60)
    print(f"[DEBUG] Starting evaluation for: {program_path}")
    
    # Safety: backup original and restore after run
    backup_path = TARGET_V.with_suffix(".v.bak")
    
    try:
        # Ensure src_v exists
        print(f"[DEBUG] Ensuring directory exists: {SRC_V_DIR}")
        SRC_V_DIR.mkdir(parents=True, exist_ok=True)

        # Backup existing jpeg_core.v (if present)
        if TARGET_V.exists():
            print(f"[DEBUG] Backing up original file to {backup_path}")
            shutil.copyfile(TARGET_V, backup_path)
        else:
            print("[DEBUG] No original file found to backup.")

        # Replace with candidate
        print(f"[DEBUG] Copying candidate program to {TARGET_V}")
        shutil.copyfile(program_path, TARGET_V)

        # ---------------------------------------------------------
        # 1) Build: cd sim && make
        # ---------------------------------------------------------
        print("[DEBUG] Step 1: Building Verilator simulation...")
        rc_make, out_make = _run(["make", "-B"], cwd=SIM_DIR, timeout=MAKE_TIMEOUT_S)
        
        if rc_make != 0:
            print("[DEBUG] Build failed.")
            return EvaluationResult(
                metrics={"combined_score": 0.0, "error": "Verilator build failed"},
                artifacts={"build_log_tail": out_make[-1000:], "error_type": "BuildFailure"}
            )
        print("[DEBUG] Build successful.")

        # ---------------------------------------------------------
        # 2) Run Simulation: execute run_verilator_decode.py
        # ---------------------------------------------------------
        # Clean previous info file
        if VERILATOR_INFO.exists():
            print(f"[DEBUG] Removing stale info file: {VERILATOR_INFO}")
            try:
                VERILATOR_INFO.unlink()
            except Exception as e:
                print(f"[DEBUG] Failed to remove info file: {e}")

        # Run the python wrapper script. This blocks until completion (The Fence).
        print("[DEBUG] Step 2: Running simulation wrapper (run_verilator_decode.py)...")
        run_script_cmd = [sys.executable, "run_verilator_decode.py"]
        rc_run, out_run = _run(run_script_cmd, cwd=JPEG_EXP_DIR, timeout=RUN_TIMEOUT_S)
        
        if rc_run != 0:
            print("[DEBUG] Simulation wrapper execution failed.")
            return EvaluationResult(
                metrics={"combined_score": 0.0, "error": "Simulation run failed"},
                artifacts={"run_log_tail": out_run[-1000:], "error_type": "RunFailure"}
            )
        print("[DEBUG] Simulation wrapper finished.")

        # ---------------------------------------------------------
        # 3) Verify Functional Correctness
        # ---------------------------------------------------------
        print("[DEBUG] Step 3: Verifying functional correctness...")
        is_functionally_correct = False
        verification_details = "Verification module missing"

        if decoder_verification:
            try:
                print("[DEBUG] invoking decoder_verification.compare_verilator_to_golden()...")
                result = decoder_verification.compare_verilator_to_golden()
                print(f"[DEBUG] Verification function returned: {result} (Type: {type(result)})")
                
                if isinstance(result, bool):
                    is_functionally_correct = result
                else:
                    # Fallback if it returns nothing but didn't raise exception
                    print("[DEBUG] Warning: Verification did not return boolean. Assuming False to be safe.")
                    is_functionally_correct = False
                    
                verification_details = "Verification ran successfully"
                print(f"[DEBUG] Functional Correctness determined as: {is_functionally_correct}")

            except Exception as e:
                print(f"[DEBUG] Exception during verification: {e}")
                is_functionally_correct = False
                verification_details = f"Verification exception: {str(e)}"
        else:
            print("[DEBUG] Error: Verification module is missing. Aborting.")
            return EvaluationResult(
                metrics={"combined_score": 0.0, "error": "Verification module missing"},
                artifacts={"error_type": "ImportError"}
            )

        # ---------------------------------------------------------
        # 4) Parse Latencies and Score
        # ---------------------------------------------------------
        print("[DEBUG] Step 4: Parsing results...")
        if VERILATOR_INFO.exists():
            try:
                VERILATOR_INFO.unlink()
            except Exception:
                pass

        run_cmd = "bash ./run_on_50.sh"
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
        latencies = _parse_latencies(VERILATOR_INFO)
        stats = _score_from_latencies(latencies, is_functionally_correct)
        
        reliability = float(min(1.0, len(latencies) / float(EXPECTED_IMAGES)))
        print(f"[DEBUG] Reliability Score: {reliability}")

        if not is_functionally_correct:
            print("[DEBUG] Verification failed; zeroing out combined_score.")
            stats["combined_score"] = 0.0

        metrics = {
            "combined_score": stats["combined_score"],
            "is_correct": 1.0 if is_functionally_correct else 0.0,
            "avg_latency": stats["avg_latency"] if stats["avg_latency"] is not None else 0.0,
            "latency_count": stats["count"],
            "reliability_score": reliability,
        }

        artifacts = {
            "verilator_info_path": str(VERILATOR_INFO),
            "verification_status": verification_details,
            "avg_latency": f"{metrics['avg_latency']:.3f}",
            "latencies_found": len(latencies),
        }

        print(f"[DEBUG] Evaluation complete. Score: {metrics['combined_score']}")
        return EvaluationResult(metrics=metrics, artifacts=artifacts)

    except Exception as e:
        print(f"[DEBUG] CRITICAL EXCEPTION in evaluate(): {e}")
        return EvaluationResult(
            metrics={"combined_score": 0.0, "error": str(e)},
            artifacts={"error_type": type(e).__name__},
        )
    finally:
        # Always restore the original file
        print("[DEBUG] Cleaning up...")
        try:
            if backup_path.exists():
                print(f"[DEBUG] Restoring backup from {backup_path} to {TARGET_V}")
                shutil.copyfile(backup_path, TARGET_V)
                backup_path.unlink(missing_ok=True)
            else:
                print("[DEBUG] No backup file found to restore.")
        except Exception as e:
            print(f"[DEBUG] Error during cleanup: {e}")
        print("=" * 60)


# Stage evaluations
def evaluate_stage1(program_path):
    print("[DEBUG] Entering evaluate_stage1")
    return evaluate(program_path)

def evaluate_stage2(program_path):
    print("[DEBUG] Entering evaluate_stage2")
    return evaluate(program_path)