def perm(n):
    def gen(n, ans, left):
        if left == []:
            print(ans)

        # loop will determine branching factor
        for i in range(len(left)):

            # slicing will make sure no duplicates are returned
            new_ans = ans + [left[i]]
            new_left = left[:i] + left[i + 1 :]

            gen(n, new_ans, new_left)

            # okey but can not pass by reference, need to pass
            # new list when making recursive call

    ans = []
    left = [x for x in range(1, n + 1)]
    return gen(n, ans, left)


def main():
    perm(10)


if __name__ == "__main__":
    main()
