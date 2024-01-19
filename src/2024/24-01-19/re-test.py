import re

with open("input") as f:
    data = f.readlines()

    for line in data:
        # get all match as a list!
        print(re.findall(r"\d", line))

        print("-" * 30)

        # get a match object!
        # object.group() gets the first object?
        print(re.search(r"\d", line))
        print(re.search(r"\d", line).group())

        print("-" * 30)
