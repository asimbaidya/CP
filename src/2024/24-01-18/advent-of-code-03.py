sum_of_numbers = 0

with open("./input") as file:
    data = file.readlines()


# let's just try random bullshit
# (1) iterate char by char and when find a numeric, we track it
# (2) also track if any symbol is adjacent to numeric chars
# (3) and end numeric chars make the  final call

data = [line.strip() for line in data]


def get_all_nums(cur, up, down):
    nums = []
    is_prev_char_digit = False
    chars = ""
    is_adjecent = False
    for i, ch in enumerate(cur):
        # print(ch, is_prev_char_digit)
        if ch.isnumeric():
            if up and not up[i].isnumeric() and up[i] != ".":
                is_adjecent = True
            if down and not down[i].isnumeric() and down[i] != ".":
                is_adjecent = True
            if i > 0 and not cur[i - 1].isnumeric() and cur[i - 1] != ".":
                is_adjecent = True
            if i < len(cur) - 1 and not cur[i + 1].isnumeric() and cur[i + 1] != ".":
                is_adjecent = True

            # 🦆(1) diagonal check
            if i > 0:
                if down and not down[i - 1].isnumeric() and down[i - 1] != ".":
                    is_adjecent = True
                if up and not up[i - 1].isnumeric() and up[i - 1] != ".":
                    is_adjecent = True
            if i < len(cur) - 1:
                if down and not down[i + 1].isnumeric() and down[i + 1] != ".":
                    is_adjecent = True
                if up and not up[i + 1].isnumeric() and up[i + 1] != ".":
                    is_adjecent = True

        if ch.isnumeric() and is_prev_char_digit:
            chars += ch
        elif ch.isnumeric() and not is_prev_char_digit:
            is_prev_char_digit = True
            chars = ch
        else:
            # if chars:
            #     print(chars, is_adjecent)
            if is_prev_char_digit and is_adjecent:
                nums.append(int(chars))
            chars = ""
            is_adjecent = False
            is_prev_char_digit = False

        # 🦆(2) if the number ad end of line
        if i == len(cur) - 1 and is_prev_char_digit:
            if is_prev_char_digit and is_adjecent:
                nums.append(int(chars))
            chars = ""
            is_adjecent = False
            is_prev_char_digit = False
            print("gotcha!")
    return nums


for i in range(len(data)):
    line = data[i]

    if i == 0:
        all_nums = get_all_nums(data[i], [], data[i + 1])
    elif i == len(data) - 1:
        all_nums = get_all_nums(data[i], data[i - 1], [])
    else:
        all_nums = get_all_nums(data[i], data[i - 1], data[i + 1])

    sum_of_numbers += sum(all_nums)

print(sum_of_numbers)
