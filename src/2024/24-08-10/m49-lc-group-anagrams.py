from collections import defaultdict
from typing import List


class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        # let's try using ord
        # it will collide with 'ill' and 'duh' and more
        # so have to use sort!

        # ans = {}
        ans = defaultdict(list)

        for s in strs:
            hash_num = "".join(sorted(s))
            # if hash_num not in ans:
            #     ans[hash_num] = [s]
            # else:
            #     ans[hash_num].append(s)
            ans[hash_num].append(s)
        return [x for x in ans.values()]


def main():
    s = Solution()
    r1 = s.groupAnagrams(["eat", "tea", "tan", "ate", "nat", "bat"])
    r2 = s.groupAnagrams(
        ["cab", "tin", "pew", "duh", "may", "ill", "buy", "bar", "max", "doc"]
    )
    print(r1)
    print(r2)


if __name__ == "__main__":
    main()
