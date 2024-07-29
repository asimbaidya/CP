from typing import List


class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        majority_elem = nums[0]
        count = 1

        # print("count:", count, "majority_elem:", majority_elem, nums[0])
        for i in range(1, len(nums)):
            if nums[i] != majority_elem:
                count -= 1
            else:
                count += 1

            if count == 0:
                majority_elem = nums[i]
                count = 1  # important
            # print("count:", count, "majority_elem:", majority_elem, nums[i])
        return majority_elem


def main():
    s = Solution()
    s.majorityElement([8, 8, 7, 7, 7])


if __name__ == "__main__":
    main()
