#!/usr/bin/env python3
import os
from byte_count import get_total_bytes  # assumes your byte_count.py is in the same folder

GOLDEN_DIR = '/home/openevolve/examples/jpeg_output_latency_current/jpeg_exp/reference_verilator_decoder_outputs'
VERILATOR_DIR = "/home/openevolve/examples/jpeg_output_latency_current/jpeg_exp/verilator_decoder_outputs"


def load_ppm_bytes(path):
    with open(path, "rb") as f:
        return f.read()


def compare_directories(golden_dir, test_dir):
    """
    Compare contents of test_dir to golden_dir.
    Returns:
        (success: bool, message: str)
    """
    golden_files = sorted([f for f in os.listdir(golden_dir) if f.endswith(".ppm")])
    test_files   = sorted([f for f in os.listdir(test_dir)   if f.endswith(".ppm")])

    # Check missing / extra files
    missing = set(golden_files) - set(test_files)
    extra   = set(test_files)   - set(golden_files)

    if missing:
        return False, f"Missing files: {sorted(missing)}"

    if extra:
        return False, f"Unexpected extra files: {sorted(extra)}"

    # Optional shortcut: compare total bytes first
    golden_total = get_total_bytes(golden_dir)
    test_total   = get_total_bytes(test_dir)
    if golden_total != test_total:
        return False, (
            f"Byte count mismatch: golden={golden_total} bytes, "
            f"verilator={test_total} bytes"
        )

    # Byte-for-byte compare each file
    for fname in golden_files:
        g_path = os.path.join(golden_dir, fname)
        t_path = os.path.join(test_dir,   fname)

        golden_bytes = load_ppm_bytes(g_path)
        test_bytes   = load_ppm_bytes(t_path)

        if golden_bytes != test_bytes:
            return False, f"File mismatch: {fname}"

    return True, "All files match."


def compare_verilator_to_golden(
    golden_dir: str = GOLDEN_DIR,
    verilator_dir: str = VERILATOR_DIR
) -> bool:
    """
    Compare Verilator decoder output against the golden python decoder output.
    Returns:
        True  → everything matches
        False → mismatch, missing/extra files, etc.
    """
    ok, _ = compare_directories(golden_dir, verilator_dir)
    return ok


if __name__ == "__main__":
    print("\n=== Verilator Decoder Output Verification ===")
    print(f"Golden directory:    {GOLDEN_DIR}")
    print(f"Verilator directory: {VERILATOR_DIR}")

    ok, msg = compare_directories(GOLDEN_DIR, VERILATOR_DIR)

    print(f"\nResult: {'PASS' if ok else 'FAIL'}")
    print(f"Details: {msg}")

    exit(0 if ok else 1)
