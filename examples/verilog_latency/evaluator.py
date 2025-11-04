import os, re, tempfile, subprocess
from openevolve.evaluation_result import EvaluationResult

IVERILOG = os.environ.get("IVERILOG", "iverilog")
VVP = os.environ.get("VVP", "vvp")

def _run(cmd, cwd, timeout=20):
    return subprocess.run(cmd, cwd=cwd, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True, timeout=timeout)

def _parse(stdout):
    def grab(rx):
        m = re.search(rx, stdout)
        return float(m.group(1)) if m else None
    total = int(re.search(r"TOTAL_TESTS:(\d+)", stdout).group(1)) if re.search(r"TOTAL_TESTS:(\d+)", stdout) else None
    passes = int(re.search(r"PASSES:(\d+)", stdout).group(1)) if re.search(r"PASSES:(\d+)", stdout) else None
    fails = int(re.search(r"FAILS:(\d+)", stdout).group(1)) if re.search(r"FAILS:(\d+)", stdout) else None
    avg_lat = grab(r"AVG_LATENCY:([0-9.]+)")
    return total, passes, fails, avg_lat

def _score(passes, total, avg_lat):
    if not (passes is not None and total and avg_lat is not None):
        return 0.0, 0.0, 0.0
    correctness = passes / float(total)
    latency_term = 1.0 / (1.0 + max(0.0, avg_lat))
    return correctness, latency_term, (correctness**3) * latency_term

def evaluate(program_path):
    try:
        with tempfile.TemporaryDirectory() as work:
            dut = os.path.join(work, "dut.v")
            with open(program_path, "r") as f_in, open(dut, "w") as f_out:
                f_out.write(f_in.read())

            here = os.path.dirname(os.path.abspath(__file__))
            tb = os.path.join(here, "tb_gcd.v")
            if not os.path.exists(tb):
                return EvaluationResult(metrics={"combined_score": 0.0, "error": "Missing tb_gcd.v"},
                                        artifacts={"error_type": "MissingFile"})

            # Use conservative flags for compatibility (Verilog-2001 is enough)
            build = _run([IVERILOG, "-o", "sim.vvp", "-s", "tb_gcd", tb, dut], cwd=work, timeout=25)
            if build.returncode != 0:
                return EvaluationResult(
                    metrics={"combined_score": 0.0, "error": "compile_error"},
                    artifacts={"stderr": build.stderr, "stdout": build.stdout,
                               "suggestion": "Check syntax/ports. Only edit inside EVOLVE-BLOCK."}
                )

            run = _run([VVP, "sim.vvp", "+SEED=42", "+NUM_TESTS=12"], cwd=work, timeout=25)
            total, passes, fails, avg_lat = _parse(run.stdout)
            if total is None:
                return EvaluationResult(
                    metrics={"combined_score": 0.0, "error": "no_summary"},
                    artifacts={"stdout": run.stdout, "stderr": run.stderr,
                               "suggestion": "Ensure tb prints the summary lines and DUT asserts done."}
                )

            correctness, latency_term, combined = _score(passes, total, avg_lat)
            return EvaluationResult(
                metrics={
                    "correctness": float(correctness),
                    "latency_term": float(latency_term),
                    "combined_score": float(combined),
                    "avg_latency_cycles": float(avg_lat or 0.0),
                    "passes": float(passes or 0.0),
                    "total": float(total or 0.0),
                },
                artifacts={
                    "summary": f"TOTAL={total}, PASS={passes}, FAIL={fails}, AVG_LAT={avg_lat}",
                    "compiler_stderr": build.stderr,
                    "sim_tail": "\n".join(run.stdout.splitlines()[-40:])
                }
            )
    except subprocess.TimeoutExpired:
        return EvaluationResult(metrics={"combined_score": 0.0, "error": "timeout"},
                                artifacts={"error_type": "Timeout"})
    except Exception as e:
        return EvaluationResult(metrics={"combined_score": 0.0, "error": str(e)},
                                artifacts={"error_type": type(e).__name__})

def evaluate_stage1(program_path):
    # same flow, fewer tests
    try:
        with tempfile.TemporaryDirectory() as work:
            dut = os.path.join(work, "dut.v")
            with open(program_path, "r") as f_in, open(dut, "w") as f_out:
                f_out.write(f_in.read())
            here = os.path.dirname(os.path.abspath(__file__))
            tb = os.path.join(here, "tb_gcd.v")
            build = _run([IVERILOG, "-o", "sim.vvp", "-s", "tb_gcd", tb, dut], cwd=work, timeout=20)
            if build.returncode != 0:
                return EvaluationResult(metrics={"runs_successfully": 0.0, "combined_score": 0.0, "error": "compile_error"},
                                        artifacts={"stderr": build.stderr})
            run = _run([VVP, "sim.vvp", "+SEED=7", "+NUM_TESTS=5"], cwd=work, timeout=20)
            total, passes, fails, avg_lat = _parse(run.stdout)
            if total is None:
                return EvaluationResult(metrics={"runs_successfully": 0.0, "combined_score": 0.0, "error": "no_summary"},
                                        artifacts={"stdout": run.stdout})
            _, _, combined = _score(passes, total, avg_lat)
            return EvaluationResult(metrics={"runs_successfully": 1.0 if passes else 0.5, "combined_score": float(combined)},
                                    artifacts={"quick_summary": f"{passes}/{total} AVG_LAT={avg_lat}"})
    except Exception as e:
        return EvaluationResult(metrics={"runs_successfully": 0.0, "combined_score": 0.0, "error": str(e)},
                                artifacts={"error_type": type(e).__name__})

def evaluate_stage2(program_path):
    return evaluate(program_path)