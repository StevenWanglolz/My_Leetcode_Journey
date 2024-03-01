class Solution:
    def minSteps(self, s: str, t: str) -> int:
        output = 0
        d1 = {}
        d2 = {}
        for i in range(97, 123):
            d1[chr(i)] = 0
            d2[chr(i)] = 0
        for c in s:
            d1[c] += 1
        for c in t:
            d2[c] += 1
        for k, v in d1.items():
            if d1[k] > d2[k]:
                output += d1[k] - d2[k]
        return output
