class Solution:
    def maxRepeating(self, sequence: str, word: str) -> int:
        answer = 0
        tmp = word
        while sequence.find(tmp) != -1:
            answer += 1
            tmp += word
        return answer
        print(answer)


def main():
    s = Solution()
    s.maxRepeating(sequence="ababc", word="ab")
    s.maxRepeating(sequence="ababc", word="ba")
    s.maxRepeating(sequence="ababc", word="ac")
    s.maxRepeating(sequence="aaabaaaabaaabaaaabaaaabaaaabaaaaba", word="aaaba")

    # wrong split ( ans = 4)
    # aaaba
    # aaaba
    # aaba
    # aaaba
    # aaaba
    # aaaba
    # aaaba

    # right split ( ans = 5)
    # aaaba
    # aaab
    # aaaba
    # aaaba
    # aaaba
    # aaaba
    # aaaba


if __name__ == "__main__":
    main()
