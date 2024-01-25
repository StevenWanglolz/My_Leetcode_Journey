# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Compare the two strings one by one like in the question.
# Approach
<!-- Describe your approach to solving the problem. -->
1. Concatenate word1 and word2 respectively.
2. Compare the length of the two strings. If they are not equal, rFalse.eturn 
3. If they are equal, comopare the characters in the string one by one. 
# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
 **The time complexity of the code is O(n^2) in the worst-case scenario.**

Here's a breakdown of the contributing factors:

1. **String Construction:**
   - The two nested loops that construct `s1` and `s2` iterate over all characters in `word1` and `word2`, respectively.
   - In the worst case, each loop iterates `n` times, leading to a total of `n*n = n^2` character comparisons and string additions.

2. **String Length Comparison:**
   - The `len(s1) != len(s2)` check takes constant time, O(1).

3. **Character-by-Character Comparison:**
   - The final loop iterates over the characters of `s1` and `s2`, up to a maximum of `n` times.
   - Each iteration involves a constant-time comparison, O(1).

**Overall Time Complexity:**

- The nested loops for string construction dominate the time complexity, resulting in O(n^2).
- The other operations (length comparison and character-wise comparison) are within nested loops or have constant time complexity, so they don't affect the overall O(n^2) behavior.

**Potential Optimization:**

- The code could be optimized to O(n) time complexity by directly comparing the characters of `word1` and `word2` without constructing intermediate strings `s1` and `s2`. This would eliminate the nested loops and reduce the overall time complexity.
- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
You're right, the previous analysis only focused on the time complexity.  Let's consider the space complexity of the code:

**Space Complexity:**

* **Temporary Strings:** The construction of `s1` and `s2` creates two temporary strings in memory. In the worst case, each string can grow to the size of the entire words combined, making the space complexity **O(n)** where n is the total number of characters in both `word1` and `word2`.
* **Additional Variables:** Other variables like `i` and loop iterators require small constant space, negligible compared to the temporary strings.

**Therefore, the overall space complexity of the code is O(n).**

**Optimization for Space:**

* By comparing characters directly as suggested for time complexity optimization, we can avoid creating the temporary strings, reducing the space complexity to **O(1)** as no additional space is required beyond the existing input lists.

Remember, choosing the appropriate optimization depends on the specific needs and constraints of your program.  While reducing time complexity may be crucial in some scenarios, minimizing space usage might be a priority in others.

# Code
```
class Solution:
    def arrayStringsAreEqual(self, word1: List[str], word2: List[str]) -> bool:
        s1 = ""
        s2 = ""

        for s in word1:
            for c in s:
                s1 += c

        for s in word2:
            for c in s:
                s2 += c
            
        if len(s1)!=len(s2):
            return False
        else:
            for i in range(len(s1)):
                if s1[i] != s2[i]:
                    return False
            return True
```