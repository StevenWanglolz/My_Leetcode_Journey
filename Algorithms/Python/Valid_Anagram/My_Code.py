from collections import defaultdict


class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        ds = defaultdict(int)
        dt = defaultdict(int)
        for n in s:
            ds[n] += 1
        for n in t:
            dt[n] += 1
        if ds == dt:
            return True
        else:
            return False
