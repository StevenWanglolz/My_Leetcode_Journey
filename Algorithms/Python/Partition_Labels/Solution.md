# [Solution](https://leetcode.com/problems/partition-labels/solutions/3952999/simple-o-n-python-solution-with-explanation/)

# Code

```Python []
class Solution:
    def partitionLabels(self, s: str) -> List[int]:
        d = {char: idx for idx, char in enumerate(s)}
        mx, size, res = 0, 0, []
        for idx, char in enumerate(s):
            size += 1
            mx = max(d[char], mx)
            if idx == mx:
                res.append(size)
                size = 0
        return res
```
