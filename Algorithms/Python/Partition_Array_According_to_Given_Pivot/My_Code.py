class Solution:
    def pivotArray(self, nums: List[int], pivot: int) -> List[int]:
        l = []
        for i in range(len(nums)):
            if nums[i] < pivot:
                l.append(nums[i])
        for i in range(len(nums)):
            if nums[i] == pivot:
                l.append(nums[i])
        for i in range(len(nums)):
            if nums[i] > pivot:
                l.append(nums[i])
        return l
