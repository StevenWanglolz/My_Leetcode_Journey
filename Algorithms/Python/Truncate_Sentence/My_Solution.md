# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
1. Iterate through the string.

2. Determine the condition.
# Approach
<!-- Describe your approach to solving the problem. -->
- This approach uses a for-loop and an if-elif statement.  
1. Declare a string ```output```as the output, and an integer ```count``` to keep track of the amount of spaces ```" "``` that have been iterated through.

2. The first if condition checks if this character is a space ```" "```. If so, increase ```count``` by 1.
   
3. The second if checks if ```count```==k. If so, break the for-loop.
# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The time complexity of the `truncateSentence` function is **O(n)**, where **n** is the length of the input string **s**.

**Here's a breakdown of the steps involved and their time complexities:**

1. **Initialization:**
   - `output = ""` and `count = 0` take constant time, O(1).

2. **For loop:**
   - The `for w in s:` loop iterates over each character in the input string **s**. This loop runs **n** times, where **n** is the length of **s**.
   - Inside the loop:
     - `if w == " ":` and `if count == k:` take constant time, O(1).
     - `count += 1` and `output += w` also take constant time, O(1).

**Overall time complexity:**

- The dominant operation is the `for` loop, which runs **n** times.
- All other operations within the loop have constant time complexity.
- Therefore, the overall time complexity of the function is **O(n)**.

**Key points:**

- The time complexity is **linear**, meaning the execution time grows proportionally with the input string length.
- The function iterates through the string only once, contributing to its efficient time complexity.
- Constant-time operations within the loop don't affect the overall time complexity in the big O notation.

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity of the `truncateSentence` function is also **O(n)**, where **n** is the length of the input string **s**. Here's why:

1. **Memory allocation:**
    - Initially, `output` and `count` require constant space, O(1), regardless of the string length.

2. **Looping:**
    - Within the loop, only `output` dynamically grows as characters are added.
    - At any given point, the size of `output` will be at most **k**, where **k** is the number of words to truncate to.

3. **Overall space complexity:**
    - Since the maximum size of `output` is bounded by **k**, the space complexity is still **O(n)**, even though it grows with the input size.

**Additional factors:**

- Constant-time operations like iterating and conditional checks don't significantly impact space complexity.
- While the function iterates through the string, it doesn't store intermediate results, contributing to its efficient space usage.

**Therefore, both the time and space complexity of the `truncateSentence` function are O(n), making it an efficient solution for truncating sentences based on word count.**

# Code
```Python []
class Solution:
    def truncateSentence(self, s: str, k: int) -> str:
        output = ""
        count = 0
        for w in s:
            if w == " ":
                count += 1
            if count == k:
                break
            output += w   
        return output
```
