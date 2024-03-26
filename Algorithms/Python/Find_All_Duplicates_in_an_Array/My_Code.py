from collections import defaultdict


class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        m = defaultdict(int)
        output = []
        for n in nums:
            m[n] += 1
        for k, v in m.items():
            if v >= 2:
                output.append(k)
        return output
