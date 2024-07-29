from typing import List


class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:

        ss = strs[0]
        last_i = len(ss) - 1

        for s in strs:

            # if current word is small then common substr will be a substr of this substr
            if len(s) - 1 < last_i:
                last_i = len(s) - 1

            # this does not optimize anything, it's just a bullshit approach which is buggy
            # while last_i >= 0 and ss[last_i] != s[last_i]:
            #     print("here")
            #     last_i -= 1

            i = 0
            while i <= last_i:
                if ss[i] == s[i]:
                    i += 1
                else:
                    break
            last_i = i - 1

            if last_i < 0:
                return ""

        return ss[0 : last_i + 1]


def main():
    s = Solution()

    strs = ["flower", "flow", "flight"]
    # strs = ["dog", "racecar", "car"]
    # strs = ["a", "aa"]
    # strs = ["cir", "car"]
    print(s.longestCommonPrefix(strs))


if __name__ == "__main__":
    main()
