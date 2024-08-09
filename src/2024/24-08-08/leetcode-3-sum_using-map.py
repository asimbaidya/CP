from typing import List


class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        return "__ TODO __ | learn 2p first"


def main():
    s = Solution()
    print(s.threeSum(nums=[-1, 0, 1, 2, -1, -4]))
    # Output: [[-1, -1, 2], [-1, 0, 1]]
    print(s.threeSum(nums=[0, 1, 1]))
    print(s.threeSum(nums=[0, 0, 0]))
    print(s.threeSum([3, 0, -2, -1, 1, 2]))


if __name__ == "__main__":
    main()
