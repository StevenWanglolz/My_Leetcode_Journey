# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Sort the list

# Approach
<!-- Describe your approach to solving the problem. -->

# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
O(nlogn)

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
O(n)

# Code

```python3 []
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

```
