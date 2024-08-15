from typing import List


class Solution:
    def candy(self, ratings: List[int]) -> int:
        # this time use dp with O(1) space complexity
        pass


def main():
    s = Solution()
    print(s.candy([1, 0, 2]))
    print(s.candy([1, 2, 2]))
    print(s.candy([1, 2, 3, 4, 5]))
    print(s.candy([5, 4, 3, 2, 1]))


if __name__ == "__main__":
    main()
