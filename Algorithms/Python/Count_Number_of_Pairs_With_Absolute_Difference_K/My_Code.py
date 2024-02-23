class Solution:
    def countKDifference(self, nums: List[int], k: int) -> int:
        count = 0
        m = {}
        for n in nums:
            if n in m:
                m[n] += 1
            else:
                m[n] = 1
            count += m.get((n + k), 0)
            count += m.get((n - k), 0)
        return count
