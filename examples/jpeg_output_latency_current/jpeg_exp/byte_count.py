#!/usr/bin/env python3
import os
import sys
from pathlib import Path

def get_total_bytes(directory):
    """
    Calculate the total size in bytes of all files in the given directory.

    Args:
        directory (str or Path): Path to the directory.

    Returns:
        int: Sum of bytes of all files in the directory.
    """
    directory = Path(directory)
    if not directory.is_dir():
        raise ValueError(f"{directory} is not a valid directory")

    total_size = 0
    for file in directory.iterdir():
        if file.is_file():
            total_size += file.stat().st_size
    return total_size


def main():
    if len(sys.argv) != 2:
        print(f"Usage: {sys.argv[0]} <directory>")
        sys.exit(1)

    directory = sys.argv[1]
    try:
        total_bytes = get_total_bytes(directory)
        print(f"Total size of files in '{directory}': {total_bytes} bytes")
    except ValueError as e:
        print(f"Error: {e}")
        sys.exit(1)


if __name__ == "__main__":
    main()
