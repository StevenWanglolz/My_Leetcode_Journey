## [Original Post](https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/solutions/4632297/beats-95-easy-to-understand/)

# Code

```Python []
class Solution(object):
    def smallerNumbersThanCurrent(self, nums):
        num = sorted(nums)
        return [num.index(x) for x in nums]
```
