class Solution:
    def isPalindrome(self, s: str) -> bool:

        s_upper = s.upper()
        s_letters = [ch for ch in s_upper if "A" <= ch <= "Z" or "0" <= ch <= "9"]

        return s_letters == s_letters[::-1]
