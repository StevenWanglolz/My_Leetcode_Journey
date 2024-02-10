## [Original Post](https://leetcode.com/problems/number-of-laser-beams-in-a-bank/solutions/4495066/sum-of-devices-prev-count-1/)

# Code

```Python []
class Solution:
    def numberOfBeams(self, bank: List[str]) -> int:
        ans=0
        prev=0
        for row in bank:
            dev=row.count('1')
            if dev>0:
                ans+=dev*prev
                prev=dev
        return ans
```
