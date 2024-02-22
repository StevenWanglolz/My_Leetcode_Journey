# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The code consists of a nested loop where the outer loop runs from 0 to len(nums) - 3, and the inner loop checks for the presence of two specific values (nums[i] + diff) and (nums[i] + diff + diff) in the list `nums`.

For each iteration of the outer loop, the inner loop performs two constant-time lookups (using `in`), which results in O(1) time complexity for each iteration of the inner loop.

Therefore, the overall time complexity of the code is O(N^2), where N is the length of the input list `nums`. The dominant factor is the nested loop structure, and the size of the input directly influences the execution time.

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity of the code is O(1). This is because the algorithm uses a constant amount of extra space regardless of the size of the input list `nums`. The only variables used are `count`, `i`, `b`, and `diff`, and their space requirements do not depend on the input size. The algorithm does not use any additional data structures or allocate memory that scales with the input size, so it is considered to have constant space complexity.

# Code

```Python []
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
```
