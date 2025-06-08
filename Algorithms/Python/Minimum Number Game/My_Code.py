from collections import deque


class Solution:
    def numberGame(self, nums: List[int]) -> List[int]:
        nums = deque(sorted(nums))
        output = []
        while (len(nums) > 1):
            second = nums.popleft()
            first = nums.popleft()
            output.append(first)
            output.append(second)
        return output
