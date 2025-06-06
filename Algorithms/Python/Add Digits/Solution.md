# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Convert int to string, string to int

# Approach
<!-- Describe your approach to solving the problem. -->
1. Convert int to string, string to int
2. Sum up the total
3. Check if there is more than one digit. If there is, call recusively. If not, return total.

# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
    🔹 O(log₁₀(n))
Because the number of digits in n is log₁₀(n)

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
 O(log₁₀(n)) (due to recursion stack)

# Code

```python3 []
class Solution:
    def addDigits(self, num: int) -> int:
        total = 0
        for c in str(num):
            total += int(c)
        if total > 9:
            return self.addDigits(total)
        return total

```
