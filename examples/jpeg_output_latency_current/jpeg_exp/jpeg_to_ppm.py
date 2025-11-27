#!/usr/bin/env python3
import os
import sys
from pathlib import Path
from PIL import Image

def convert_jpeg_to_ppm(in_path, out_path):
    img = Image.open(in_path)
    img = img.convert("RGB")  # ensure 24-bit RGB
    width, height = img.size
    pixels = img.tobytes()

    with open(out_path, "wb") as f:
        # PPM header (P6, width height, maxval 255)
        header = f"P6 {width} {height} 255\n"
        f.write(header.encode())
        f.write(pixels)

def main():
    if len(sys.argv) < 2:
        print("Usage: jpeg_to_ppm.py <directory>")
        sys.exit(1)

    input_dir = Path(sys.argv[1])

    if not input_dir.is_dir():
        print(f"Error: {input_dir} is not a directory")
        sys.exit(1)

    # Create output directory "<input>_decoded"
    output_dir = Path(str(input_dir) + "_decoded")
    output_dir.mkdir(exist_ok=True)

    print(f"Writing PPM files to: {output_dir}")

    for file in sorted(input_dir.iterdir()):
        if file.suffix.lower() in {".jpg", ".jpeg"}:
            out_path = output_dir / (file.stem + ".ppm")
            print(f"{file.name} -> {out_path.name}")
            convert_jpeg_to_ppm(file, out_path)

    print("Done.")

if __name__ == "__main__":
    main()
