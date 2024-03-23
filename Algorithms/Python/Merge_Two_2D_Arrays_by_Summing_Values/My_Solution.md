# Approach
<!-- Describe your approach to solving the problem. -->
Use a hash table to keep the key and value

# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
O(n)

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
O(1)s

# Code

```
class Solution:
    def mergeArrays(self, nums1: List[List[int]], nums2: List[List[int]]) -> List[List[int]]:
        d = {}
        output = []
        for i in range(1001):
            d[i] = 0
        for n in nums1:
            d[n[0]] += n[1]
        for n in nums2:
            d[n[0]] += n[1]
        for k, v in d.items():
            if v != 0:
                output.append([k, v])
        return output
```
