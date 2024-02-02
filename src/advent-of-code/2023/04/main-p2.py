with open("./input") as fiie:
    lines = [line.strip() for line in fiie.readlines()]

    cards = [1] * len(lines)

    for index, line in enumerate(lines):
        head, tail = line.split("|")

        winning_nums_str = head.split(":")[1].strip().split()
        winning_nums = set(map(int, winning_nums_str))

        my_nums = set(map(int, tail.strip().split()))

        # print(winning_nums)
        # print(my_nums)

        count = len(winning_nums.intersection(my_nums))

        next_index = index + 1
        last_index = next_index + count

        for i in range(next_index, last_index):
            cards[i] += cards[index]
    print(sum(cards))
