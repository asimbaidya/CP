import math


def find_perfect_numbers(limit):
    perfect_numbers = []
    for p in range(2, 32):
        # generates (2^n) -1
        mersenne_prime = (2**p) - 1

        # perfect number is almost squaqre size of mersenne_prime,so
        if mersenne_prime > limit:
            break

        # based on some established theory :)
        if is_prime(mersenne_prime):
            # mersenne_prime is really a prime,then it can produce one perfect_number
            # using this formula,so
            perfect_number = (2 ** (p - 1)) * mersenne_prime
            if perfect_number <= limit:
                perfect_numbers.append(perfect_number)
    return perfect_numbers


# prime checker
def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True


perfect_numbers = find_perfect_numbers(40000000)
print(*perfect_numbers, sep="\n")


# n^0.5 == sqrt(n)
for n in range(1, 1000, 42):
    a = math.sqrt(n)
    b = n**0.5
    print(a - b, a, b)
