### [Source](https://leetcode.com/problems/shuffle-string/solutions/755911/python-3-lines-easy-o-n/)

- Using a list to store all the chars and joining it to return the answer string.

```
class Solution:
    def restoreString(self, s: str, indices: List[int]) -> str:
        res = [''] * len(s)
        for index, char in enumerate(s):
            res[indices[index]] = char
        return "".join(res)
```