class Solution:
    def countPoints(self, rings: str) -> int:
        m = {}
        count = 0
        for i in range(10):
            m[i] = ""
        for i in range(len(rings)):
            if i % 2 == 0:
                m[int(rings[i+1])] += rings[i]
        for k, v in m.items():
            if "R" in v and "G" in v and "B" in v:
                count += 1
        return count
