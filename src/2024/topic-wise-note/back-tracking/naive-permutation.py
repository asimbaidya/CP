# a function to generate permutation of 0-to-n where n will be the input


def generate(n: int):
    # error-can not really add n+1 depth in for loop
    for i in range(n + 1):
        for j in range(n + 1):
            for k in range(n + 1):
                if i != j and i != k and j != k:
                    print(i, j, k)


def main():
    generate(2)
    # generate(5)


if __name__ == "__main__":
    main()
