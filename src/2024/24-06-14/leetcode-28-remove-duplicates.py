from typing import List


class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        i = 0
        j = 0
        while i < len(nums):
            while i < (len(nums) - 1) and nums[i + 1] == nums[i]:
                i += 1
            nums[j] = nums[i]
            j += 1
            i += 1

        return j


def main():
    s = Solution()

    # s.removeDuplicates([0, 0, 1, 1, 1, 2, 2, 3, 3, 4])
    s.removeDuplicates([1, 1, 2])


if __name__ == "__main__":
    main()
