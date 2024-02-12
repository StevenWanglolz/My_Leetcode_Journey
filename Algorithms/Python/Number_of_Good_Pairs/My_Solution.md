# Approach
<!-- Describe your approach to solving the problem. -->
Nested for loop

# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The time complexity of the code is O(n^2), where n is the length of the input list `nums`. This is because there are nested loops, and for each element in the outer loop, the inner loop iterates through the remaining elements in the list. The number of comparisons grows quadratically with the size of the input list, resulting in O(n^2) time complexity.

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity of the code is O(1), which is constant. The only additional memory used is for the variables `n` and `output`, and they do not depend on the size of the input list. The code does not use any additional data structures that scale with the input size, so the space complexity remains constant.

# Code

```Python []
class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        n = len(nums)
        output = 0
        for i in range(n):
            for j in range(i+1, n):
                if nums[i] == nums[j]:
                    output += 1
        return output

```
