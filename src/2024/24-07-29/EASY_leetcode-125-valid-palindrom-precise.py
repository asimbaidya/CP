class Solution:
    def isPalindrome(self, s: str) -> bool:

        # s_alp = "".join([ch.lower() for ch in s if ch.isalnum()])

        s_alp = "".join(
            [ch for ch in s.lower() if ch.isalnum()]
        )  # .lower() gets called once

        head = 0
        tail = len(s_alp) - 1

        while head < tail:
            if s_alp[head] != s_alp[tail]:
                return False

            head += 1
            tail -= 1

        return True
