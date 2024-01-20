from functools import reduce


result = reduce(lambda a, b: a * b, [1, 2, 3, 4, 5])
print(result)
