# Verilog Latency Minimization (OpenEvolve + Icarus Verilog)

**Goal:** Evolve the implementation of a small GCD accelerator to **reduce the number of clock cycles** from `start` to `done` without changing behavior.

## Prereqs

- Python 3.9+
- `pip install openevolve`
- Icarus Verilog (iverilog + vvp) installed and on PATH
  - macOS: `brew install icarus-verilog`
  - Ubuntu/Debian: `sudo apt-get install iverilog`
- LLM API key via any OpenAI-compatible endpoint (export as `OPENAI_API_KEY`)

## Files

- `initial_module.v` – Verilog DUT; only code inside `// EVOLVE-BLOCK-*` will be edited.
- `tb_gcd.v` – Testbench that checks correctness and prints `AVG_LATENCY`.
- `evaluator.py` – Compiles (iverilog), runs (vvp), parses results, and returns a score.
- `config.yaml` – LLM + evolution settings and the system prompt.

## Run

From the **repo root**:

```bash
python openevolve-run.py \
  examples/verilog_latency/initial_module.v \
  examples/verilog_latency/evaluator.py \
  --config examples/verilog_latency/config.yaml \
  --iterations 10