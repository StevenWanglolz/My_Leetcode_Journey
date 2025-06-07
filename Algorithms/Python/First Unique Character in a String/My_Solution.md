# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Use a hashmap to store frequencies

# Approach
<!-- Describe your approach to solving the problem. -->
1. Set default dictionary
2. Add frequencies
3. Loop through the dictionaries to find the index

# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
    O(n)

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
    O(1) 
(dictionary)

# Code

```python3 []
class Solution:
    def firstUniqChar(self, s: str) -> int:
        d = {}
        for i in range(len(s)):
            d[s[i]] = 0
        for i in range(len(s)):
            d[s[i]] += 1
        for char, freq in d.items():
            if freq == 1:
                return s.index(char)
        return -1

```
