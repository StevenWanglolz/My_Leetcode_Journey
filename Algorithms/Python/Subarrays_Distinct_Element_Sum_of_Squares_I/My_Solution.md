# Approach
<!-- Describe your approach to solving the problem. -->
Use ```set```

# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The time complexity of the code is O(n^3), where "n" is the length of the input list `nums`. Let's break down the reasons:

1. The outer loop runs for each `size` from 1 to `len(nums)` inclusive, so it contributes O(n) to the time complexity.

2. The middle loop iterates through each possible starting index for a subarray, which is O(n) in the worst case.

3. The inner loop creates a set from a subarray, which has a time complexity of O(size), where "size" is the length of the subarray. Since the outer two loops contribute O(n) in the worst case, the overall time complexity of the inner loop becomes O(n * n) = O(n^2).

4. The `count` calculation inside the inner loop is O(1).

Multiplying these complexities, the overall time complexity is O(n) *O(n)* O(n^2) = O(n^3).

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity of the code is O(n), where "n" is the length of the input list `nums`. Here's the breakdown:

1. The `sub` set is created within the inner loop for each subarray. The size of the set is determined by the length of the subarray, which can vary from 1 to the length of the entire array. Therefore, in the worst case, the space complexity of the `sub` set is O(n).

2. The variables `output` and `count` use constant space, and their space complexity is O(1).

Since the dominant factor is the space required for the `sub` set, the overall space complexity is O(n).

# Code

```Python []
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

```
