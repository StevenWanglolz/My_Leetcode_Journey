class Solution:
    def arithmeticTriplets(self, nums: List[int], diff: int) -> int:
        count = 0
        for i in range(len(nums) - 2):
            b = True
            if (nums[i] + diff) not in nums or (nums[i] + diff + diff) not in nums:
                b = False
            if b == True:
                count += 1
        return count
