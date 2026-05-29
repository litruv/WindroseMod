import os
import re

MODULE_ROOT = r"d:\WindroseModding\WindroseMod\Source\R5"
PUBLIC_DIR = os.path.join(MODULE_ROOT, "Public")
PRIVATE_DIR = os.path.join(MODULE_ROOT, "Private")
UCLASS_RX = re.compile(
    r"UCLASS\s*\((?:[^()]*|\([^()]*\))*\)\s*\r?\nclass\s+(?:\w+_API\s+)?(\w+)"
)
CTOR_RX = re.compile(r"^\s*(\w+)::(\w+)\s*\(")

total_removed = 0

for header_name in os.listdir(PUBLIC_DIR):
    if not header_name.endswith(".h"):
        continue
    header_path = os.path.join(PUBLIC_DIR, header_name)
    cpp_path = os.path.join(PRIVATE_DIR, header_name[:-2] + ".cpp")
    if not os.path.exists(cpp_path):
        continue

    allowed = set(UCLASS_RX.findall(open(header_path, encoding="utf-8").read()))
    if not allowed:
        continue

    lines = open(cpp_path, encoding="utf-8").read().splitlines()
    out = []
    i = 0
    file_removed = 0
    while i < len(lines):
        line = lines[i]
        m = CTOR_RX.match(line)
        if m and m.group(1) == m.group(2) and m.group(1) not in allowed:
            i += 1
            while i < len(lines) and "}" not in lines[i]:
                i += 1
            if i < len(lines):
                i += 1
            file_removed += 1
            continue
        out.append(line)
        i += 1

    if file_removed:
        with open(cpp_path, "w", encoding="utf-8", newline="\n") as f:
            f.write("\n".join(out) + "\n")
        total_removed += file_removed

print(f"Removed {total_removed} misplaced constructor stubs.")
