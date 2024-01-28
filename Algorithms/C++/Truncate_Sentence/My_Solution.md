# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
1. Iterate through the string.

2. Determine the condition.
# Approach
<!-- Describe your approach to solving the problem. -->
- This approach uses a for-loop and an if-elif statement.  
1. Declare a string ```output```as the output, and an integer ```count``` to keep track of the amount of spaces ```" "``` that have been iterated through.

2. The first if condition checks if this character is the kth number of space ```" "``` that we encounter. If so, we use the ```break``` statement  to escape the for-loop.  
   
3. The ```elif``` statement determines whether this character is a space```" "```. If so, increase ```count``` by 1.
# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
 **The time complexity of the code is O(n), where n is the length of the input string s.**

**Here's a breakdown:**

1. **Initialization:**
   - `count = 0`: Constant time, O(1)
   - `output = ""`: Constant time, O(1)

2. **For Loop:**
   - Iterates through each character of the string s.
   - The loop's body executes for each character, performing:
     - `if(* it == ' ')`: Constant time, O(1)
     - `count++`: Constant time, O(1)
     - `if(count == k)`: Constant time, O(1)
     - `break`: Constant time, O(1)
     - `output += *it`: Amortized constant time, O(1) on average

3. **Return Statement:**
   - Returns the constructed string: Constant time, O(1)

**Essentially:**
- The loop's iterations depend directly on the string's length, leading to O(n) behavior.
- Operations within the loop have constant time complexity, not affecting the overall O(n) time complexity.

**Key Points:**

- The code processes each character of the input string once, contributing to linear time complexity.
- Operations within the loop are constant-time, not impacting the overall O(n) growth.
- String concatenation using `+=` is typically amortized constant time, meaning it averages to constant time over multiple operations.

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity of the code is also **O(n), where n is the length of the input string s.**

Let's analyze the memory usage throughout the function:

1. **Variables:**
   - `count`: Integer variable, constant space usage of O(1).
   - `output`: String variable, initially empty, but grows as characters are added.

2. **For Loop:**
   - No additional memory allocations occur within the loop.

3. **String Concatenation:**
   - Each iteration of the loop appends a single character to `output`, increasing its size by 1 byte.

**Therefore:**

- The `output` string's size directly depends on the input string's length, leading to linear space complexity.
- Other variables have constant space usage.

**Summary:**

- Both time and space complexity of the `truncateSentence` function are O(n), due to linear dependence on the input string length.

I hope this clarifies the space complexity of the code!

# Code
```C++ []
class Solution {
public:
    string truncateSentence(string s, int k) {
        int count = 0;
        string output = "";
        for(auto it = s.begin(); it != s.end(); ++it){
            if(* it == ' '){
                count++;
            }
            if(count == k){
                break;
            }
            output += *it;
        }
        return output;
    }
};
```
