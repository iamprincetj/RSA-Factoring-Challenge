#!/usr/bin/python3
from factorise import factorize
import sys

with open(sys.argv[1], "r") as f:
    n = int(f.readline().strip())

factors = factorize(n)
