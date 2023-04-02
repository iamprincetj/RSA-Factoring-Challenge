#!/usr/bin/python3

import sys
from factorise import factorize

if len(sys.argv) != 2:
    sys.stderr.write("Usage: python factors.py <file>\n")
    sys.exit(1)

try:
    with open(sys.argv[1], "r") as f:
        factors = {}
        for line in f:
            line = line.strip()
            if not line:
                continue
            num_str = int(line)
            if num_str in factors:
                print(factors[num_str])
            else:
                factorize(num_str)
except FileNotFoundError:
    sys.stderr.write(f"Error: can't open file {sys.argv[1]}\n")
    sys.exit(1)
