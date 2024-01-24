[Source](https://leetcode.com/problems/split-a-string-in-balanced-strings/solutions/403836/c-java-python-easy-solution/)

# Solution
Greedily split the string, and with the counting
L +1
R -1

when the counter is reset to 0, we get one balanced string.

# Code
```
def balancedStringSplit(self, s: str) -> int:
    res = cnt = 0         
    for c in s:
        cnt += 1 if c == 'L' else -1            
        if cnt == 0:
            res += 1
    return res  
```