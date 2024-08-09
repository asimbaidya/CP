from typing import List


class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:

        # using map
        nums_maps = {value: index for index, value in enumerate(nums)}

        for value in nums_maps.keys():
            required = target - value

            other_index = nums_maps.get(required)

            print(
                target,
                value,
                required,
                other_index,
                nums_maps.get(value),
            )
            if other_index:

                # but can fix here!
                # because the index stored is the 2nd(last) which mean index on nums will return the first index

                if nums_maps[value] == other_index:
                    return [other_index, nums.index(value)]
                else:
                    return [nums_maps[value], other_index]


def main():
    s = Solution()
    print(s.twoSum(nums=[2, 7, 11, 15], target=9))

    # case-2: wont work with map because index over-written
    print(s.twoSum(nums=[3, 3], target=6))
    print(s.twoSum(nums=[1, 3, 4, 2], target=6))


if __name__ == "__main__":
    main()
