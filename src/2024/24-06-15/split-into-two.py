from typing import List


class Solution:
    def minimumIndex(self, nums: List[int]) -> int:
        majority_elem = nums[0]
        count = 1
        for i in range(1, len(nums)):
            if nums[i] != majority_elem:
                count -= 1
            else:
                count += 1

            if count == 0:
                majority_elem = nums[i]
                count = 1  # important

        count = 0
        for i in nums:
            if i == majority_elem:
                count += 1

        curr_count = 0
        split = 0

        for i in range(len(nums)):
            if nums[i] == majority_elem:
                curr_count += 1

            if curr_count * 2 > (i + 1):
                split = i
                break

        right_count = count - curr_count
        right_len = len(nums) - (i + 1)
        if right_count * 2 > right_len:
            return split


def main():
    s = Solution()
    # s.minimumIndex([2, 1, 3, 1, 1, 1, 7, 1, 2, 1])
    s.minimumIndex([3, 3, 3, 3, 7, 2, 2])


if __name__ == "__main__":
    main()
