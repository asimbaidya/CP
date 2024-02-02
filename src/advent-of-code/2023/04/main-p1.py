with open("./input") as fiie:
    lines = [line.strip() for line in fiie.readlines()]

    result = 0

    for line in lines:
        head, tail = line.split("|")

        winning_nums_str = head.split(":")[1].strip().split()
        winning_nums = set(map(int, winning_nums_str))

        my_nums = set(map(int, tail.strip().split()))

        # print(winning_nums)
        # print(my_nums)

        # count = 0
        # for num in my_nums:
        #     if winning_nums.intersection(set([num])):
        #         if count == 0:
        #             count = 1
        #             continue
        #         count *= 2
        # result += count

        # alternative approach of previous commented code
        # count_match = len(winning_nums.intersection(my_nums))
        count_match = len(winning_nums & my_nums)  # 🦆 & operator for set intersection

        # result += int(2 ** (count_match - 1)) # 🦆 int required
        result += 2 ** (count_match - 1) if count_match > 0 else 0

    print(result)
