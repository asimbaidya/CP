from typing import List


class Solution:
    def candy(self, ratings: List[int]) -> int:
        size = len(ratings)

        # yee, everyone got candies now, yee
        candies = [1] * size

        # iterate from 1 and as i
        # # if rating is grater, i's candy should increase + 1
        # # if rating is lower, i-1's candy should increase

        # but
        # but to prevent react worst case, we can do it from both side
        # to get ans answer with O(2n) aka O(N)
        # let's see if this intuition works for hard problem :)

        # print(ratings)
        # print(candies)
        for i in range(1, size):
            if ratings[i] > ratings[i - 1] and candies[i] <= candies[i - 1]:
                candies[i] = candies[i - 1] + 1
            elif ratings[i - 1] > ratings[i] and candies[i - 1] <= candies[i]:
                candies[i - 1] = candies[i] + 1
        # print(candies)
        ratings = ratings[::-1]
        candies = candies[::-1]
        for i in range(1, size):
            if ratings[i] > ratings[i - 1] and candies[i] <= candies[i - 1]:
                candies[i] = candies[i - 1] + 1
            elif ratings[i - 1] > ratings[i] and candies[i - 1] <= candies[i]:
                candies[i - 1] = candies[i] + 1

        # print(candies[::-1])
        # shit worked !! intuiton was right but dp can
        return sum(candies)


def main():
    s = Solution()
    print(s.candy([1, 0, 2]))
    print(s.candy([1, 2, 2]))
    print(s.candy([1, 2, 3, 4, 5]))
    print(s.candy([5, 4, 3, 2, 1]))


if __name__ == "__main__":
    main()
