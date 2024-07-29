from typing import List


class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:

        head = 0
        tail = len(numbers) - 1

        while head < tail:
            total = numbers[head] + numbers[tail]
            if total == target:
                return [head + 1, tail + 1]
            while head < tail and numbers[head] + numbers[tail] < target:
                head += 1
            while head < tail and numbers[head] + numbers[tail] > target:
                tail -= 1

        return False


def main():
    s = Solution()
    s.twoSum(
        [
            1,
            2,
            3,
            3,
            4,
        ],
        30,
    )


if __name__ == "__main__":
    main()
