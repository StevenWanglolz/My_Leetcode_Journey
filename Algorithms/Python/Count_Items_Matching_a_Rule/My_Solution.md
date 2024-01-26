# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
For-loop and if-else statement
# Approach
<!-- Describe your approach to solving the problem. -->
1. First create an integer ```count``` to store the amount of matching items.
   
2. Use if-else statements to determine the ruleKey.

3. Use a for-loop to loop through the list. If the ruleValues match, increase ```count``` by 1.

4. Finally, return count.
# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
 **The time complexity of the code is O(n)**.

**Here's a breakdown of the analysis:**

- **Dominating Factor:** The code's behavior is primarily determined by the `for` loops within each `if` block. Each loop iterates over the entire `items` list, which has a length of `n`.
- **Constant Operations:** The remaining operations (comparisons, variable assignments, and return statement) take a constant amount of time, irrespective of the input size. They don't significantly affect the overall time complexity.
- **Branching Disregarded:** Although the code has conditional `if` statements, they don't create significant time variation. **Why?** Because each branch contains a `for` loop that iterates over the entire `items` list, leading to essentially the same amount of work in each case.

**In summary:**

- The `for` loops iterate `n` times, processing each item in the list.
- The other operations have a constant time complexity, O(1).
- The conditional branches don't alter the dominant time complexity.

Therefore, the overall time complexity is expressed as **O(n)**, indicating that the code's execution time grows linearly with the size of the input list.

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity of the code is **O(1)**. Here's why:

* The only additional memory used beyond the input `items` list is for the following variables:
    * `count`: an integer that stores the number of matches, which takes a constant amount of space regardless of the input size.
    * Temporary variables (like `i`) used within the loops also take a constant amount of space.
* No additional data structures are created throughout the execution.
* The `if` statements don't affect the space complexity because they only involve conditional branching, not allocating any additional memory.

Therefore, the overall space complexity is O(1), meaning the memory usage remains constant regardless of the size of the input list. This is an efficient implementation in terms of both time and space complexity.

# Code
```
class Solution:
    def countMatches(self, items: List[List[str]], ruleKey: str, ruleValue: str) -> int:
        count = 0
        if ruleKey == "type":
            for i in range(len(items)):
                if items[i][0] == ruleValue:
                    count += 1
        elif ruleKey == "color":
            for i in range(len(items)):
                if items[i][1] == ruleValue:
                    count += 1
        else:
            for i in range(len(items)):
                if items[i][2] == ruleValue:
                    count += 1
        return count
```