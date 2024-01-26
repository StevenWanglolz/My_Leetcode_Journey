# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->

# Approach
<!-- Describe your approach to solving the problem. -->
For-loop and if-else statement
# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
1. First create an integer ```count``` to store the amount of matching items.
   
2. Use if-else statements to determine the ruleKey.

3. Use a for-loop to loop through the list. If the ruleValues match, increase ```count``` by 1.

4. Finally, return count.
- Time complexity:
   **The time complexity of the `countMatches` function is O(N), where N is the number of items in the `items` vector.**

**Here's a breakdown of the analysis:**

1. **Initialization and String Comparisons:**
   - The initial assignments and string comparisons (`ruleKey == "type"`, `ruleKey == "color"`) take constant time, denoted as O(1).
   - These operations don't depend on the input size, so their time complexity remains constant regardless of the number of items.

2. **Loops and Value Comparisons:**
   - The core of the function's time complexity lies within the `for` loops.
   - Each `for` loop iterates over the `items` vector, which has a size of N.
   - Inside each loop, there's a string comparison (`items[i][j] == ruleValue`), but this comparison also takes constant time (O(1)).
   - The overall complexity of each loop is determined by the number of iterations, which is N.

3. **Conditional Logic:**
   - The `if` statements don't impact the overall time complexity significantly.
   - They only determine which specific column of the `items` vector to access within the loops.
   - The loops themselves still iterate N times, regardless of which column is being accessed.

4. **Combining Operations:**
   - When combining operations with different time complexities, we consider the one with the highest growth rate as the primary factor.
   - In this case, the `for` loops with a time complexity of O(N) dominate the constant-time operations and conditional logic.

**Therefore, the overall time complexity of the `countMatches` function is O(N), indicating that the execution time grows linearly in proportion to the number of items in the `items` vector.**

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity of the `countMatches` function is also **O(1)**, meaning it consumes a constant amount of additional memory regardless of the input size (number of items). Here's why:

* **Variables:** The function only uses a few variables like `count`, `i`, `ruleKey`, and `ruleValue`. These variables have fixed sizes and don't depend on the number of items in `items`.
* **No additional data structures:** Besides the constant variables, the function doesn't create any additional data structures like arrays or dictionaries. No memory allocation happens inside the loop or based on the input size.

Therefore, the function's space complexity remains constant regardless of how many items it processes. It only utilizes the base memory necessary for variable storage and basic operations, making it space-efficient.

In summary, both the time complexity and space complexity of the `countMatches` function are **O(1)**, making it an efficient solution for its intended purpose.

# Code
```
class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count = 0;
        if(ruleKey == "type"){
            for(int i = 0; i < items.size(); i++){
                if(items[i][0] == ruleValue){
                    count++;
                }
            }
        }
        else if(ruleKey == "color"){
            for(int i = 0; i < items.size(); i++){
                if(items[i][1] == ruleValue){
                    count++;
                }
            }
        }
        else{
            for(int i = 0; i < items.size(); i++){
                if(items[i][2] == ruleValue){
                    count++;
                }
            }
        }
        return count;
    }
};
```