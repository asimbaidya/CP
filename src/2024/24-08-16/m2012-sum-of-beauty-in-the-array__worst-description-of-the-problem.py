from typing import List

"""
== Question
You are given a 0-indexed integer array nums. For each index i (1 <= i <= nums.length - 2) the beauty of nums[i] equals:
 - 2, if nums[j] < nums[i] < nums[k], for all 0 <= j < i and for all i < k <= nums.length - 1.
 - 1, if nums[i - 1] < nums[i] < nums[i + 1], [[and the previous condition is not satisfied || previous statement should satisfy for all eleent]]
 - 0, if none of the previous conditions holds.
Return the sum of beauty of all nums[i] where 1 <= i <= nums.length - 2.

== Answer
as first statement need to satisfy for all element before and after, need to use prefix-max and suffix-min
"""


class Solution:
    def sumOfBeauties(self, nums: List[int]) -> int:
        prefix_max = [None] * len(nums)
        suffix_min = [None] * len(nums)

        mx = float("-inf")
        mn = float("inf")
        for i in range(0, len(nums)):
            mx = max(mx, nums[i])
            prefix_max[i] = mx

            # iterating using negative index
            mn = min(mn, nums[-(i + 1)])
            suffix_min[-(i + 1)] = mn

        beauty_sum = 0
        for i in range(1, len(nums) - 1):
            j = i - 1
            k = i + 1
            if prefix_max[j] < nums[i] < suffix_min[k]:
                beauty_sum += 2
            elif nums[j] < nums[i] < nums[k]:
                beauty_sum += 1
        return beauty_sum


def main():
    s = Solution()
    print(s.sumOfBeauties(nums=[1, 2, 3]))
    print(s.sumOfBeauties(nums=[2, 4, 6, 4]))
    print(s.sumOfBeauties(nums=[3, 2, 1]))


if __name__ == "__main__":
    main()
