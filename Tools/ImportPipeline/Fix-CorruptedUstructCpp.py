import os
import re

MODULE_ROOT = r"d:\WindroseModding\WindroseMod\Source\R5"
PUBLIC_DIR = os.path.join(MODULE_ROOT, "Public")
PRIVATE_DIR = os.path.join(MODULE_ROOT, "Private")
USTRUCT_RX = re.compile(
    r"USTRUCT\s*\((?:[^()]|\([^()]*\))*\)\s*\r?\nstruct\s+(?:\w+_API\s+)?(\w+)"
)

fixed = 0
for cpp_name in os.listdir(PRIVATE_DIR):
    if not cpp_name.endswith(".cpp"):
        continue
    cpp_path = os.path.join(PRIVATE_DIR, cpp_name)
    content = open(cpp_path, encoding="utf-8", errors="replace").read()
    if "::()" not in content:
        continue

    header_path = os.path.join(PUBLIC_DIR, cpp_name[:-4] + ".h")
    if not os.path.exists(header_path):
        continue

    header = open(header_path, encoding="utf-8", errors="replace").read()
    structs = USTRUCT_RX.findall(header)
    if not structs:
        continue

    struct_name = structs[0]
    new_content = content.replace("::()", f"{struct_name}::{struct_name}()")
    if new_content != content:
        with open(cpp_path, "w", encoding="utf-8", newline="\n") as f:
            f.write(new_content)
        fixed += 1

print(f"Repaired {fixed} corrupted USTRUCT cpp files.")
