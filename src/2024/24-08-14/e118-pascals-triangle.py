from typing import List


class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        tri_angle = []

        prev_row = [1]
        for i in range(numRows):
            row = [0] * (i + 1)

            j = 0
            k = i
            while j <= k:
                if j == 0:
                    row[j] = 1
                    row[k] = 1
                else:
                    val = prev_row[j] + prev_row[j - 1]
                    row[j] = val
                    row[k] = val
                j += 1
                k -= 1
            tri_angle.append(row)
            prev_row = row
        # print(tri_angle)
        return tri_angle
