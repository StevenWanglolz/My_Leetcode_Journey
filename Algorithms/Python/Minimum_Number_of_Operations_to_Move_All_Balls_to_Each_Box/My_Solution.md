# Approach

1. Map all the '1' indices to a list.

2. Go throufh that list and calculate each time.<!-- Describe your approach to solving the problem. -->

# Complexity

- Time complexity:
    <!-- Add your time complexity here, e.g. $$O(n)$$ -->
  The outer loop iterates n times, contributing O(n).
  The inner loop now iterates over |l|, which in this case is at most n (all characters can be 1s). This loop contributes O(n).
  Inside the inner loop, constant-time operations are negligible.
  Combining these, the total number of operations becomes n \* n, which simplifies to O(n^2).

---

- Space complexity:
  <!-- Add your space complexity here, e.g. $$O(n)$$ -->
  n-length variables still have constant space usage.  
  l can now hold up to n indices in the worst case (all 1s), leading to O(n) space complexity.

# Code

```Python []
class Solution:
    def minOperations(self, boxes: str) -> List[int]:
        n = len(boxes)
        l = []
        output = []
        for i, s in enumerate(boxes):
            if s == '1':
                l.append(i)
        for i in range(n):
            count = 0
            for num in l:
                count += abs(num-i)
            output.append(count)
        return output
```
