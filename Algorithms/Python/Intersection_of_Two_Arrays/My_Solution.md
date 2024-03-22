# Approach

1. Create a hashmap and iterate through ```nums1```.

2. Iterate through ```nums2``` to check if the number appeared in ```nums1```.

# Complexity

- Time complexity:
O(n)

- Space complexity:
O(1)

# Code

```Python []
class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        d = {}
        output = []
        for i in range(0, 1001, 1):
            d[i] = False
        for n in nums1:
            d[n] = True
        for n in nums2:
            if d[n] == True:
                output.append(n)
        return set(output)
```
