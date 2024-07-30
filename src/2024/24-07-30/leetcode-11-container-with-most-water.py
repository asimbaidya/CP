from typing import List


class Solution:
    def maxArea(self, height: List[int]) -> int:

        head = 0
        tail = len(height) - 1
        ans = 0

        while head != tail:
            # len(heights) = 10^5 so need to do something to make it faster
            ans = max(ans, min(height[head], height[tail]) * (tail - head))
            print(height[head], height[tail], head, tail, ans)

            if height[head] > height[tail]:
                tail -= 1
            else:
                head += 1
        print(ans)
        return ans


def main():
    s = Solution()
    height = [1, 8, 6, 2, 5, 4, 8, 3, 7]
    height = [1, 1]
    s.maxArea(height)


if __name__ == "__main__":
    main()
