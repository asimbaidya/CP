# tags: aoc-2023,all,map


rules = {
    "red": 12,
    "green": 13,
    "blue": 14,
}


def get_counts(draw):
    counts = {}
    for item in draw.split(","):
        count, colors = item.strip().split(" ")
        counts[colors] = int(count)
    return counts


def is_possible(draw):
    counts = get_counts(draw)
    for color, count in counts.items():
        if color in rules and count > rules[color]:
            return False
    return True


with open("./input") as file:
    lines = file.readlines()

    sum_of_id = 0

    for line in lines:
        head, tail = line.strip().split(":")

        game_id = int(head.split(" ")[1])

        draws = tail.split(";")
        filtered_draws = list(map(is_possible, draws))

        # using builtin all funnction
        if all(filtered_draws):
            sum_of_id += game_id

    print(sum_of_id)
