import re
import sys

sum = 0
with open("input") as f:
    data = f.read().splitlines()

    for line in data:
        first_digit = re.search(r"\d", line)
        last_digit = re.findall(r"\d", line)

        if not first_digit or not last_digit:
            sys.exit(-1)

        first_digit = first_digit.group()
        last_digit = last_digit[-1]

        sum += int(f"{first_digit}{last_digit}")

print(sum)
