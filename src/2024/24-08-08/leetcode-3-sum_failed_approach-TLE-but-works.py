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

                # print(result, sorted_nums[static])
                # print(
                #     result,
                #     [
                #         sorted_nums[static],
                #         sorted_nums[head],
                #         sorted_nums[tail],
                #     ],
                # )
                if result == 0:
                    triplet = [
                        sorted_nums[static],
                        sorted_nums[head],
                        sorted_nums[tail],
                    ]
                    if triplet not in ans:
                        ans.append(triplet)

                    head += 1
                    tail -= 1
                elif result < 0:
                    head += 1
                else:
                    tail -= 1
            static += 1
        return ans


def main():
    s = Solution()
    print(s.threeSum(nums=[-1, 0, 1, 2, -1, -4]))
    # Output: [[-1, -1, 2], [-1, 0, 1]]
    print(s.threeSum(nums=[0, 1, 1]))
    print(s.threeSum(nums=[0, 0, 0]))
    print(s.threeSum([3, 0, -2, -1, 1, 2]))


if __name__ == "__main__":
    main()
