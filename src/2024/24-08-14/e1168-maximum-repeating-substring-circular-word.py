# 😂 beats 98.91 %


class Solution:
    def maxRepeating(self, sequence: str, word: str) -> int:
        size = len(sequence)
        w_size = len(word)

        answer = 0
        tmp_answer = 0

        start = 0

        while start < size:
            match_char_count = 0

            i = start

            while i < size and sequence[i] == word[(i - start) % w_size]:
                match_char_count += 1
                i += 1

            tmp_answer = match_char_count // w_size

            if tmp_answer == 0:
                start += 1
            else:
                start = start + match_char_count - w_size + 1
                answer = max(tmp_answer, answer)
                tmp_answer = 0
            answer = max(tmp_answer, answer)
        print(answer)
        return answer


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
