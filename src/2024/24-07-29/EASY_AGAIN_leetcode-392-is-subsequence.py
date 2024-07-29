class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:

        # shit case 1
        if s == "":
            return True
        if t == "":
            return False

        s_i = 0
        t_i = 0

        s_last = len(s) - 1
        t_last = len(t) - 1

        while s_i <= s_last and t_i <= t_last:
            while t_i <= t_last and s[s_i] != t[t_i]:
                t_i += 1
            t_i += 1
            s_i += 1

        # print(s_i, t_i)
        # shit case 2, shit case 3
        if s_i - 1 == s_last and s[s_last] == t[min(t_i - 1, t_last)]:
            return True
        else:
            return False


def main():
    S = Solution()
    pass
    s = "abc"
    t = "ahbgdc"

    s = ""
    t = ""

    print(S.isSubsequence(s, t))


if __name__ == "__main__":
    main()
