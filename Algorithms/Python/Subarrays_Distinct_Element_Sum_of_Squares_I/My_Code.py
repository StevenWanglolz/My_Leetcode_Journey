class Solution:
    def sumCounts(self, nums: List[int]) -> int:
        output = 0
        count = 0
        for size in range(1, len(nums)+1):
            for i in range(len(nums)-size+1):
                sub = set(nums[i:i+size])
                count = len(sub) * len(sub)
                output += count
        return output
