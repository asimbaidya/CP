from typing import List


class Solution:
    def minimumSum(self, nums: List[int]) -> int:

        prefix_min = [float("inf")] * len(nums)
        suffix_min = [float("inf")] * len(nums)

        prefix_min[0] = nums[0]
        suffix_min[-1] = nums[-1]

        for i in range(1, len(nums)):
            prefix_min[i] = min(prefix_min[i - 1], nums[i])
            suffix_min[-(i + 1)] = min(nums[-(i + 1)], suffix_min[-i])

        min_mountain_sum = float("inf")

        for j in range(1, len(nums) - 1):
            i, k = j - 1, j + 1

            if prefix_min[i] < nums[j] > suffix_min[k]:
                # print(prefix_min[i] , nums[j] , suffix_min[k])
                # print(prefix_min[i] + nums[j] + suffix_min[k])
                min_mountain_sum = min(
                    min_mountain_sum, prefix_min[i] + nums[j] + suffix_min[k]
                )

        return min_mountain_sum if min_mountain_sum != float("inf") else -1


def main():
    s = Solution()
    print(s.minimumSum(nums=[8, 6, 1, 5, 3]))
    print(s.minimumSum(nums=[6, 5, 4, 3, 4, 5]))
    print(s.minimumSum(nums=[5, 4, 8, 7, 10, 2]))

    # huge nums(a bit slow)
    from _huge_nums import nums

    print(s.minimumSum(nums))


if __name__ == "__main__":
    main()
