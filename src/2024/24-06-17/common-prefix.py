from typing import List


class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        # mn = min(strs)
        # mx = max(strs)
        strs.sort()
        mn, mx = strs[0], strs[-1]

        minimum_length = min([len(mn), len(mx)])
        i = 0
        while i < minimum_length and mn[i] == mx[i]:
            i += 1
        return mn[:i]


def main():
    s = Solution()

    strs = ["flower", "flow", "flight"]
    strs = ["dog", "racecar", "car"]
    strs = ["a", "aa"]
    # strs = ["cir", "car"]
    print(s.longestCommonPrefix(strs))


if __name__ == "__main__":
    main()
