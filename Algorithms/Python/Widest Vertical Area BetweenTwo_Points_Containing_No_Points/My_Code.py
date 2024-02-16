from typing import List

class Solution:
    def maxWidthOfVerticalArea(self, points: List[List[int]]) -> int:
        n = len(points)
        l = [points[i][0] for i in range(n)]
        l.sort()

        m = 0
        for i in range(1, n):
            diff = l[i] - l[i - 1]
            m = max(m, diff)

        return m
