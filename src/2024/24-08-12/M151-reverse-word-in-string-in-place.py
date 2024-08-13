class Solution:
    def reverseWords(self, s: str) -> str:
        s = list(s)
        s_size = len(s)

        # start - strip extra spaces!
        i = 0
        j = 0
        while j < s_size:
            if s[j] != " " or i != 0 and s[i - 1] != " ":
                s[i] = s[j]
                i += 1
            j += 1
        if s[i - 1] == " ":
            i -= 1
        # end - strip extra spaces!

        # reverse in place
        head = 0
        tail = i - 1
        while head < tail:
            s[head], s[tail] = s[tail], s[head]
            head += 1
            tail -= 1

        # now word reverse(fix)
        index = 0
        head = 0
        while index <= i:
            if index == i or s[index] == " ":
                tail = index - 1
                while head < tail:
                    s[head], s[tail] = s[tail], s[head]
                    head += 1
                    tail -= 1
                head = index + 1
            index += 1

        print("".join(s[:i]))
        return "".join(s[:i])


def main():
    s = Solution()
    s.reverseWords("the sky is blue")
    s.reverseWords("  hello world           ")
    s.reverseWords("  hello  ")
    s.reverseWords("hello bello ")


if __name__ == "__main__":
    main()
