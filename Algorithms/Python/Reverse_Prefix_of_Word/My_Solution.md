# Approach

Index slicing

# Complexity

- Time complexity:
O(n)

- Space complexity:
O(n)

# Code

```Python []
class Solution:
    def reversePrefix(self, word: str, ch: str) -> str:
        found = 0
        s = ""
        if ch in word:
            for i in range(len(word)):
                if word[i] == ch:
                    found = i
                    break
            for i in range(found, -1, - 1):
                s += word[i]
            for i in range(found+1, len(word)):
                s += word[i]
            return s
        else:
            return word

```
