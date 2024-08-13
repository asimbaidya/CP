class Solution:
    def reverseWords(self, s: str) -> str:
        print(" ".join([w for w in s.strip().split()[::-1]]))
        return " ".join([w for w in s.strip().split()[::-1]])


def main():
    s = Solution()
    s.reverseWords("the sky is blue")
    s.reverseWords("  hello world           ")
    s.reverseWords("  hello  ")
    s.reverseWords("hello bello ")


if __name__ == "__main__":
    main()
