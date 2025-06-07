class Solution:
    def firstUniqChar(self, s: str) -> int:
        d = {}
        for i in range(len(s)):
            d[s[i]] = 0
        for i in range(len(s)):
            d[s[i]] += 1
        for char, freq in d.items():
            if freq == 1:
                return s.index(char)
        return -1
