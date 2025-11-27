import os

# -------------------------------------------------------------------
# Configure directories here (absolute or relative paths)
# -------------------------------------------------------------------
GOLDEN_DIR  = "python_decoder_outputs"
MISSING_DIR = "outputs_missing_files"
WRONG_DIR   = "outputs_wrong_files"
EMPTY_DIR   = "outputs_empty_files"
# -------------------------------------------------------------------


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

    # Check missing / extra
    missing = set(golden_files) - set(test_files)
    extra   = set(test_files) - set(golden_files)

    if missing:
        return False, f"Missing files: {sorted(missing)}"

    if extra:
        return False, f"Unexpected extra files: {sorted(extra)}"

    # Byte-for-byte correctness
    for fname in golden_files:
        g_path = os.path.join(golden_dir, fname)
        t_path = os.path.join(test_dir,   fname)

        golden_bytes = load_ppm_bytes(g_path)
        test_bytes   = load_ppm_bytes(t_path)

        if golden_bytes != test_bytes:
            return False, f"File mismatch: {fname}"

    return True, "All files match."


def run_test(name, golden_dir, test_dir, expected_pass):
    ok, msg = compare_directories(golden_dir, test_dir)

    print(f"\n=== Test: {name} ===")
    print(f"Directory under test: {test_dir}")
    print(f"Result: {'PASS' if ok else 'FAIL'}")
    print(f"Details: {msg}")

    if ok != expected_pass:
        print("➡️  ERROR: Test outcome differs from expected result!")
        return False
    else:
        print("➡️  Test behaved as expected.")
        return True


def main():
    overall_pass = True

    # Expected to FAIL
    overall_pass &= run_test("missing_dir", GOLDEN_DIR, MISSING_DIR, expected_pass=False)
    overall_pass &= run_test("wrong_dir",   GOLDEN_DIR, WRONG_DIR,   expected_pass=False)
    overall_pass &= run_test("empty_dir",   GOLDEN_DIR, EMPTY_DIR,   expected_pass=False)

    # Expected to PASS
    overall_pass &= run_test("golden_vs_golden", GOLDEN_DIR, GOLDEN_DIR, expected_pass=True)

    print("\n====================================================")
    print("FINAL RESULT:", "ALL TESTS PASSED" if overall_pass else "TEST SUITE FAILED")
    print("====================================================")

    return 0 if overall_pass else 1


if __name__ == "__main__":
    main()
