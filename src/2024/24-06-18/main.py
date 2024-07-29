from typing import List


class Solution:
    def jump(self, nums: List[int]) -> int:

        i = 0
        ans = 0
        if len(nums) == 1:
            return 0

        while i < len(nums):
            jump_width = nums[i]
            j = i + 1
            jump_stop = i + jump_width
            if jump_stop >= len(nums) - 1:
                return ans + 1

            next_i = j
            while j <= jump_stop:
                diff = j - next_i
                if nums[j] + diff >= nums[next_i]:
                    next_i = j
                j += 1
            ans += 1
            print(i, next_i)
            i = next_i
        return ans


def main():
    s = Solution()

    nums = [2, 3, 0, 1, 4]
    nums = [2, 3, 1, 1, 4]
    nums = [1, 2, 1, 1, 1]
    nums = [1, 1, 1, 1, 1]
    nums = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 1, 0]
    nums = [0]
    print(s.jump(nums))


if __name__ == "__main__":
    main()
