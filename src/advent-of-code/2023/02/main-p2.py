from functools import reduce


with open("./input") as file:
    lines = file.readlines()

    sum_of_points = 0

    for line in lines:
        head, tail = line.strip().split(":")

        draws = tail.split(";")
        counts = {}
        for draw in draws:
            for item in draw.split(","):
                count, colors = item.strip().split(" ")

                # 🦕
                # if colors not in counts.keys() or count > counts[colors]:
                #     counts[colors] = int(count)

                if colors not in counts.keys():
                    counts[colors] = int(count)
                elif int(count) > counts[colors]:
                    counts[colors] = int(count)

        sum_of_points += reduce(lambda a, b: a * b, counts.values())

    print(sum_of_points)
