#!/usr/bin/env python3
import os
import subprocess
from concurrent.futures import ProcessPoolExecutor, as_completed

INPUT_DIR = "50_imgs"
OUTPUT_DIR = "verilator_decoder_outputs"
EXECUTABLE = "./jpeg_decoder/sim/jpeg_decode"
MAX_WORKERS = 11 # Adjust based on CPU cores

def decode_image(img_file):
    """Decode a single image and return result."""
    in_path = os.path.join(INPUT_DIR, img_file)
    out_name = os.path.splitext(img_file)[0] + ".ppm"
    out_path = os.path.join(OUTPUT_DIR, out_name)

    try:
        result = subprocess.run(
            [EXECUTABLE, in_path, out_path],
            stdout=None,  # let it print directly to terminal
            stderr=subprocess.PIPE,  # still capture errors
            timeout=60  # prevent hanging forever
        )
    except subprocess.TimeoutExpired:
        return img_file, False, "Timeout expired"

    if result.returncode != 0:
        return img_file, False, result.stderr.decode()
    return img_file, True, ""


def main():
    os.makedirs(OUTPUT_DIR, exist_ok=True)

    images = [f for f in os.listdir(INPUT_DIR) if f.lower().endswith(".jpg")]
    total = len(images)
    completed = 0

    with ProcessPoolExecutor(max_workers=MAX_WORKERS) as executor:
        futures = {executor.submit(decode_image, img): img for img in images}

        for future in as_completed(futures):
            img_file, success, err = future.result()
            completed += 1
            remaining = total - completed

            if success:
                print(f"[{completed}/{total}] [OK] {img_file} ({remaining} left)")
            else:
                print(f"[{completed}/{total}] [FAIL] {img_file}: {err} ({remaining} left)")


if __name__ == "__main__":
    main()
