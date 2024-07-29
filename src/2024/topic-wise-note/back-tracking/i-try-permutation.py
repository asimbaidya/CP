## attempt 1
# def perm(n):
#     def gen(n, start, flags):
#
#         if start == n - 1:
#             print(arr)
#
#         for i in range(start, n):
#             if flags[i] == False:
#                 flags[i] = True
#                 arr[i] = i
#                 gen(n, start + 1, flags)
#                 flags[i] = False
#
#     flags = [False] * n
#     arr = [0] * n
#
#     return gen(n, 0, flags)


def perm(n):
    def gen(n, start, flags):
        if n == start - 1:
            print(arr)

        for i in range(n):
            pass

    flags = [False] * n
    arr = [0] * n

    return gen(n, 0, flags, arr)

    # on first level there will be n branch, then n-1 branch then n-2 branch and depth will be n
    # so think how can that be implemented!


def main():
    perm(3)


if __name__ == "__main__":
    main()
