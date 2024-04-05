class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        nums = set(nums)
        length = 1
        ml = []
        for n in nums:
            if n-1 not in nums:
                while n+1 in nums:
                    n += 1
                    length += 1
            ml.append(length)
            length = 1
        return max(ml) if ml != [] else 0
