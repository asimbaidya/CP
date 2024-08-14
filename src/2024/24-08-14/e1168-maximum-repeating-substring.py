class Solution:
    def maxRepeating(self, sequence: str, word: str) -> int:
        # let's do brute force

        seq_size = len(sequence)
        word_size = len(word)

        i = 0
        ans = 0
        tmp_ans = 0
        while i < seq_size - word_size + 1:

            chunk = sequence[i : i + word_size]

            print(sequence, word, i, chunk)
            if chunk == word:
                tmp_ans += 1
                i += word_size
            else:
                if tmp_ans == 0:
                    i += 1
                else:
                    i -= word_size - 1

                ans = max(tmp_ans, ans)
                tmp_ans = 0

        ans = max(tmp_ans, ans)

        return ans


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
