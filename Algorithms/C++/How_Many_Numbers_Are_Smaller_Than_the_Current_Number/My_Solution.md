# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code

```
class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        o = []
        for n in nums:
            c = 0
            for x in nums:
                if n > x:
                    c += 1
            o.append(c)
        return o
```
