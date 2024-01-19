import re


spelled_nums = {
    "one": 1,
    "two": 2,
    "three": 3,
    "four": 4,
    "five": 5,
    "six": 6,
    "seven": 7,
    "eight": 8,
    "nine": 9,
}


def get_calibration_values(line):
    all_digits = re.findall(r"\d", line)
    if all_digits:
        # 🦆(1) a line might not contain any digit at alll!
        first_digit = all_digits[0]
        last_digit = all_digits[-1]

        spelled_nums[first_digit] = int(first_digit)
        spelled_nums[last_digit] = int(last_digit)

    first_digit_pos = float("infinity")
    last_digit_pos = float("infinity")
    first_digit_key = ""
    last_digit_key = ""

    for k, v in spelled_nums.items():
        pos = line.find(k)
        if pos != -1 and pos < first_digit_pos:
            first_digit_pos = pos
            first_digit_key = k

        # easy to think in reverse order :(
        pos = line[::-1].find(k[::-1])
        if pos != -1 and pos < last_digit_pos:
            last_digit_pos = pos
            last_digit_key = k

    return int(f"{spelled_nums[first_digit_key]}{spelled_nums[last_digit_key]}")


with open("input") as f:
    data = f.readlines()

    sum_of_values = 0
    for line in data:
        sum_of_values += get_calibration_values(line)
    print(sum_of_values)
