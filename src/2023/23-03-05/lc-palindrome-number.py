# https://leetcode.com/problems/palindrome-number/


class Solution:
    def isPalindrome(self, x: int) -> bool:

        # else part  is slow as 2 conversion taking place
        # lets make it fast by one conversiona and manual equality check
        # instead of list comparison

        if x < 0:
            return False
        else:
            # return str(x) == str(x)[::-1]
            s = str(x)
            ss = "".join(s[::-1])
            return ss == s
