n = 1
for i in range(-n, n + 1):
    for j in range(-n, n + 1):
        print(f"({i}, {j})".center(15), end=" ")
    print()


surrounds = [(i, j) for i in range(-1, 2) for j in range(-1, 2) if i != 0 or j != 0]
print(surrounds)
