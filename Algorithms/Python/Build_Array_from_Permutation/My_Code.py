class Solution:
    def buildArray(self, nums: List[int]) -> List[int]:
        n = len(nums)
        l = [0]*n
        for i in range(n):
            l[i] = nums[nums[i]]
        return l