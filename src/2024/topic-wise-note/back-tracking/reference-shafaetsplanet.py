def perm(n: int):

    good_counter = 0
    escape_counter = 0

    def generate(idx, n, position, taken):
        nonlocal good_counter
        nonlocal escape_counter

        if idx == n:
            # print(position)
            good_counter += 1
            return

        for i in range(n):
            if not taken[i]:
                taken[i] = True
                position[idx] = i
                generate(idx + 1, n, position, taken)
                taken[i] = False
            else:
                escape_counter += 1

    position = [0] * n
    taken = [False] * n
    generate(0, n, position, taken)

    print(good_counter)
    print(escape_counter)
    print(escape_counter - good_counter)
    print(escape_counter // good_counter)


def main():
    perm(15)


if __name__ == "__main__":
    main()
