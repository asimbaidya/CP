from typing import List


class Solution:
    def canCompleteCircuit(self, gas: List[int], cost: List[int]) -> int:
        # taken from discussion!
        # O(n)

        total_diff = 0
        answer_index = 0
        total_take = 0

        for i in range(len(gas)):
            current_take = gas[i] - cost[i]

            total_diff += current_take
            total_take += current_take
            if total_take < 0:
                answer_index = i + 1
                total_take = 0

        if total_diff < 0:
            print(-1)
            return -1
        else:
            print(answer_index)
            return answer_index


def main():
    s = Solution()
    s.canCompleteCircuit(gas=[1, 2, 3, 4, 5], cost=[3, 4, 5, 1, 2])
    s.canCompleteCircuit(gas=[2, 3, 4], cost=[3, 4, 3])
    s.canCompleteCircuit(gas=[5, 8, 2, 8], cost=[6, 5, 6, 6])
    s.canCompleteCircuit(gas=[1, 1, 3], cost=[2, 2, 1])


if __name__ == "__main__":
    main()
