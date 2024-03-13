# Approach

1. Sort the list.

2. Pair up the bigger numbers with the smaller numbers.

# Complexity

- Time compelexity:
O(nlogn)
- Space complexity
O(1)

# Code

```Python []
class Solution:
    def minPairSum(self, nums: List[int]) -> int:
        i = 0
        j = len(nums)-1
        nums.sort()
    m = 0
        while i < j:
            m = max(m, nums[i] + nums[j])
            i += 1
            j -= 1
        return m
```
