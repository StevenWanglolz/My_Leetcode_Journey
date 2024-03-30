class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        output = []
        for i in range(len(nums)):
            temp = nums[i:]
            if target - nums[i] in nums[i+1:]:
                output.append(i)
                n = target - nums[i]
                break
        for i in range(i+1, len(nums)):
            if nums[i] == n:
                output.append(i)
        return output
