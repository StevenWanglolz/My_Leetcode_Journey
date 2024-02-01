# Approach
<!-- Describe your approach to solving the problem. -->
Simple for-loop

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The time complexity of the code is O(n), where n is the length of the stones string. This is because the code iterates over each character in the stones string once, and the lookups in the jewel_set are done in constant time using a set.

Here is a table that summarizes the time complexity of the code:

| Operation | Time complexity |
|---|---|
| Iterating over the stones string | O(n) |
| Lookups in the jewel_set | O(1) |
| Overall time complexity | O(n) |
- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity of the code is O(1), which means that the amount of space used by the code does not grow as the input size increases. This is because the code only uses a constant amount of extra space, regardless of the length of the jewels and stones strings.

Here is a table that summarizes the space complexity of the code:

| Operation | Space complexity |
|---|---|
| Creating the jewel_set | O(n) |
| Storing the count variable | O(1) |
| Looping over the stones string | O(1) |
| Overall space complexity | O(n) |
# Code
```Python []
class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        count = 0
        for c in stones:
            if c in jewels:
                count += 1
        return count
```