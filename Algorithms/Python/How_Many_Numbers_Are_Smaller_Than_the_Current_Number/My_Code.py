class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        o = []
        for n in nums:
            c = 0
            for x in nums:
                if n > x:
                    c += 1
            o.append(c)
        return o