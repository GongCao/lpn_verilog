#!/bin/bash

# Directory containing jpg files
DIR="50_imgs/"

echo '' > jpeg_verilator_info
echo '' > jpeg_lpn_info
# Loop through each jpg file in the directory
for file in "$DIR"/*.jpg; do
    # Run your Python command with the filename
    ./jpeg_decoder/sim/jpeg_decode $file random.ppm >> jpeg_verilator_info
done

# Loop through each jpg file in the directory
# for file in "$DIR"/*.jpg; do
#     # Run your Python command with the filename
#     ./lpn_cpp/lpnsim $file >> jpeg_lpn_info
# done