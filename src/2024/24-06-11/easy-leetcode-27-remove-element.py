class Solution(object):
    # def removeElement(self, nums, val):
    #     i = 0
    #     for x in nums:
    #         if x != val:
    #             nums[i] = x
    #             i += 1
    #
    #     print(nums, i,val)
    #     return i

    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """

        # to track last element in the array to swap with first
        reverse_index = len(nums) - 1
        k = 0
        current_index = 0

        while current_index <= reverse_index:
            if nums[current_index] == val:
                nums[current_index], nums[reverse_index] = (
                    nums[reverse_index],
                    nums[current_index],
                )
                reverse_index -= 1
            else:
                k += 1
                current_index += 1

        print(nums, k, val)
        return k

        # if current_index == reverse_index and current_index != 0:
        #     # base: nothing to change, all good
        #     break
        #
        # while reverse_index >= current_index and nums[reverse_index] == val:
        #     # handling consequitive occurance of val
        #     reverse_index -= 1
        #     k += 1
        #
        # if nums[current_index] == val and current_index < reverse_index:
        #     nums[current_index], nums[reverse_index] = (
        #         nums[reverse_index],
        #         nums[current_index],
        #     )
        #     reverse_index -= 1
        #     k += 1

        # print(nums, len(nums) - k, val)
        # return len(nums) - k


def main():
    solution = Solution()

    solution.removeElement([3, 2, 2, 3], 3)
    solution.removeElement([0, 1, 2, 2, 3, 0, 4, 2], 2)

    # test failed
    solution.removeElement([1], 1)
    solution.removeElement([3, 3], 3)


if __name__ == "__main__":
    main()
