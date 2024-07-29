from typing import List


class Solution:

    def productExceptSelf(self, nums: List[int]) -> List[int]:

        p_sum = [1] * (len(nums) + 1)
        s_sum = [1] * (len(nums) + 1)

        ans = [1] * len(nums)

        for i in range(len(nums)):
            p_sum[i] = nums[i] * p_sum[i - 1]

        for i in range(len(nums))[::-1]:
            s_sum[i] = nums[i] * s_sum[i + 1]

        for i in range(len(nums)):
            ans[i] = p_sum[i - 1] * s_sum[i + 1]

        return ans


def main():
    s = Solution()
    # nums = [1, 2, 3, 4]
    nums = [-1, 1, 0, -3, 3]
    print(s.productExceptSelf(nums))


if __name__ == "__main__":
    main()
