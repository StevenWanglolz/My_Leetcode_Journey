class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        m = defaultdict(int)
        output = []
        for n in nums:
            m[n] += 1
        for _ in range(k):
            n = 0
            for key, v in m.items():
                if v > n:
                    n = v
                    num = key
            output.append(num)
            m[num] = 0
        return output
