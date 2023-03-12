def get_b(n: int) -> str:
    return f"{n:b}"


def main():
    n: int = int(input())

    b = get_b(n)


if __name__ == "__main__":
    test = int(input())
    for i in range(test):
        main()
