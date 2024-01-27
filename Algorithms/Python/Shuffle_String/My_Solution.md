# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
1. Sort the list.  

2. Append the sorted list to an empty string.
# Approach
<!-- Describe your approach to solving the problem. -->
1. Create a list with the same size as the list provided called, and an empty string.  

2. First, use a for-loop to sort the list by appending it accordingly to the new list.  

3. Secondly, use another for-loop to append the characters in the correct order.
# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
 **The time complexity of the code is O(n), where n is the length of the input string s.**

Here's a breakdown of the steps and their time complexities:

1. **Creating list l:**
   - `l = [0] * len(indices)` takes O(n) time to create a list of length n.

2. **First for loop:**
   - `for i in range(len(indices)):` iterates n times.
   - `l[indices[i]] = s[i]` performs a constant-time assignment within the loop.
   - This loop, as a whole, takes O(n) time.

3. **Second for loop:**
   - `for string in l:` iterates n times, as l has n elements.
   - `output += string` appends a character to a string, taking constant time in Python.
   - This loop also takes O(n) time.

4. **Returning output:**
   - `return output` takes constant time.

**Combining these steps:**

- The most time-consuming operations are the two for loops, each taking O(n) time.
- Other operations have constant time complexity.
- In Big O notation, we focus on the dominant terms, so we can express the overall time complexity as O(n) + O(n) = O(n).

**Therefore, the overall time complexity of the code is linear, meaning its execution time grows proportionally with the size of the input string.**

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity of the code is also **O(n)**. Here's a breakdown:

1. **List l:**
    - Creating `l = [0] * len(indices)` allocates space for n zeros, contributing O(n) space complexity.

2. **output string:**
    - The constructed string `output` will eventually hold the rearranged input string, leading to O(n) space complexity.

3. **Other variables:**
    - Additional variables like `i` and temporary values within the loops have constant space complexity and can be ignored in Big O analysis.

Therefore, the dominant space requirements stem from `l` and `output`, both contributing O(n) space. As they don't significantly overlap or grow with respect to each other, the overall space complexity remains **O(n)**.

In summary, both the time and space complexity of the code are linear, making it efficient for handling large input strings without excessive resource usage.

# Code
```
class Solution:
    def restoreString(self, s: str, indices: List[int]) -> str:
        l = [0] * len(indices)
        output = ""
        for i in range(len(indices)):
            l[indices[i]] = s[i]
        for string in l:
            output += string
        return output
```