class Solution:
    def romanToInt(self, s: str) -> int:
        num = 0

        sym_to_value = {
            "I": 1,
            "V": 5,
            "X": 10,
            "L": 50,
            "C": 100,
            "D": 500,
            "M": 1000,
            "IV": 4,
            "IX": 9,
            "XL": 40,
            "XC": 90,
            "CD": 400,
            "CM": 900,
        }
        i = 1

        while i < len(s):
            ch = s[i - 1 : i + 1]

            if ch in sym_to_value:
                num += sym_to_value.get(s[i - 1 : i + 1])
            elif i == len(s) - 1:
                num += sym_to_value.get(s[i - 1])
                num += sym_to_value.get(s[i])
            else:
                num += sym_to_value.get(s[i - 1])

            i += 1
            print(num)

        return num


def main():
    s = Solution()

    # s.romanToInt("III")
    s.romanToInt("MCMXCIV")


if __name__ == "__main__":
    main()
