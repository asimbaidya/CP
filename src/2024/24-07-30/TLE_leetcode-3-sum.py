from typing import List


class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:

        sorted_nums = sorted(nums)

        size = len(nums)
        static = 0
        ans = []

        while static <= size - 3:
            head = static + 1
            tail = size - 1
            while head < tail:
                result = sorted_nums[static] + sorted_nums[head] + sorted_nums[tail]
                if result == 0:
                    triplet = sorted(
                        [sorted_nums[static], sorted_nums[head], sorted_nums[tail]]
                    )
                    if triplet not in ans:
                        ans.append(triplet)
                    # both need to change as result must be distinct
                    # secondly need to check duplicates too!
                    head += 1
                    tail -= 1
                elif result > 0:
                    tail -= 1
                else:
                    head += 1
            static += 1
        print(ans)
        return ans


def main():
    s = Solution()
    nums = [-1, 0, 1, 2, -1, -4]
    s.threeSum(nums)


if __name__ == "__main__":
    main()
