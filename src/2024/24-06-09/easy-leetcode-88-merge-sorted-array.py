class Solution(object):
    def merge(self, nums1, m, nums2, n):
        """
        :type nums1: List[int]
        :type m: int
        :type nums2: List[int]
        :type n: int
        :rtype: None Do not return anything, modify nums1 in-place instead.
        """

        mi = m - 1
        ni = n - 1
        i = m + n - 1

        # print(nums1)
        while i >= 0:
            if mi < 0:
                nums1[i] = nums2[ni]
                ni -= 1
            elif ni < 0:
                nums1[i] = nums1[mi]
                mi -= 1
            elif nums1[mi] > nums2[ni]:
                nums1[i] = nums1[mi]
                mi -= 1
            else:
                nums1[i] = nums2[ni]
                ni -= 1

            i -= 1

            # print(nums1)


def main():
    sol = Solution()

    sol.merge([1, 2, 3, 0, 0, 0], 3, [2, 5, 6], 3)


if __name__ == "__main__":
    main()
