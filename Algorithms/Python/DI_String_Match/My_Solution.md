# Approach

1. Keep a pointer at the start and keep a pointer at the end.

2. After iterating through ```s```, add the last element depending on whether it is a 'D' or an 'I'.

# Complexity

- Time complexity:
O(n)

- Space complexity:
O(n)

# Code

```Python []
class Solution:
    def diStringMatch(self, s: str) -> List[int]:
        i = 0
        d = len(s)
        output = []
        for w in s:
            if w == 'D':
                output.append(d)
                d -= 1
            else:
                output.append(i)
                i += 1
        if s[-1] == 'I':
            output.append(i)
        else:
            output.append(d)
        return output
```
