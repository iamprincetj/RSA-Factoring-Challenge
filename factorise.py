#!/usr/bin/python3

def factorize(num_str):
    for i in range(2, int(num_str ** 0.5) + 1):
        if num_str % i == 0:
            print(f"{num_str}={num_str//i}*{i}")
            return
