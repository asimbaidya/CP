from typing import List


class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # new array with (value,index) then; sort; two pointer

        sorted_nums = [(index, value) for value, index in enumerate(nums)]
        sorted_nums.sort(key=lambda x: x[0])

        head = 0
        tail = len(sorted_nums) - 1

        while head < tail:
            if sorted_nums[head][0] + sorted_nums[tail][0] == target:
                return [sorted_nums[head][1], sorted_nums[tail][1]]
            if sorted_nums[head][0] + sorted_nums[tail][0] > target:
                tail -= 1
            else:
                head += 1
        # no need to handle exception as it it guaranteed that there exist an answer


def main():
    s = Solution()
    print(s.twoSum(nums=[2, 7, 11, 15], target=9))


if __name__ == "__main__":
    main()
