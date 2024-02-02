# let's try same bullshits
surrounds = [(-1, -1), (-1, 0), (-1, 1), (0, -1), (0, 1), (1, -1), (1, 0), (1, 1)]

with open("./input") as file:
    data = [line.strip() for line in file.readlines()]

    w = len(data[0])
    h = len(data)

    nums = {}

    for i, row in enumerate(data):
        for j, cell in enumerate(row):
            if cell != "*":
                continue

            for p, q in surrounds:
                x, y = p + i, q + j

                if x < 0 or y < 0 or x >= h or y >= w:
                    continue
                if not data[x][y].isnumeric():
                    continue

                # for each number(adjacent to *), find the left and right boundaries
                left = y
                right = y
                while left >= 0 and data[x][left].isnumeric():
                    left -= 1
                while right < w and data[x][right].isnumeric():
                    right += 1

                # track the number and the boundaries along with the * position and row(x) number
                if (i, j) not in nums:
                    nums[(i, j)] = set()
                nums[(i, j)].add((x, left + 1, right))
    result = 0
    for k, v in nums.items():
        # if 2 number are adjacent to a *, then we can calculate gear ratio;
        if len(v) != 2:
            continue
        nums = [int(data[x][left:right]) for x, left, right in v]
        result += nums[0] * nums[1]
    print(nums)
    print(result)  # 42
