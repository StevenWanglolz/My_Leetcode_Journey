# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The time complexity of the code is O(n) where n is the length of the input array. This is because the outer loop iterates n times, and the inner loop does a constant amount of work.

Here is a table that summarizes the time complexity of the code:

| Operation | Time Complexity |
|---|---|
| Outer loop iteration | O(n) |
| Inner loop work | O(1) |
| Total time complexity | O(n) |

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity of the code is O(n), where n is the length of the input array. This is because the code allocates two arrays of size n: one to store the output and one as a temporary array.

Here is a table that summarizes the space complexity of the code:

| Operation | Space Complexity |
|---|---|
| Output array | O(n) |
| Temporary array | O(n) |
| Total space complexity | O(n) |

# Code

```
class Solution:
    def buildArray(self, nums: List[int]) -> List[int]:
        n = len(nums)
        l = [0]*n
        for i in range(n):
            l[i] = nums[nums[i]]
        return l
```
