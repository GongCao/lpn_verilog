import os

folder = "."

# Collect and sort all *.jpg files by numeric value in filename
files = [
    f for f in os.listdir(folder)
    if f.endswith(".jpg") and os.path.splitext(f)[0].isdigit()
]
files = sorted(files, key=lambda x: int(os.path.splitext(x)[0]))

# First rename to temporary unique names to avoid collisions
temp_names = []
for i, f in enumerate(files):
    temp_name = f"tmp_rename_{i}.jpg"
    os.rename(os.path.join(folder, f), os.path.join(folder, temp_name))
    temp_names.append(temp_name)

# Now rename temporary files to final 000.jpg, 001.jpg, ...
for idx, temp in enumerate(temp_names):
    new_name = f"{idx:03d}.jpg"
    print(f"Renaming {temp} -> {new_name}")
    os.rename(
        os.path.join(folder, temp),
        os.path.join(folder, new_name)
    )
