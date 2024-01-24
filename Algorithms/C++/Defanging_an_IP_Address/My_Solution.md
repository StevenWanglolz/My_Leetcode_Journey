# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Iterate through the string
# Approach
<!-- Describe your approach to solving the problem. -->
1. Create a string to store the output string.

2.  Use for(char c: address).
     
3. Use if else to determine whether each character is a "." in the loop.
   
4. Return the output string.
# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The time complexity of the code is O(n), where n is the length of the input string `address`. Here's the breakdown:

1. The code uses a single-pass loop that iterates through each character of the input string.  
   
2. For each character, it performs a constant amount of work (checking if it's a dot and appending characters accordingly).  
   
3. The loop iterates through each character exactly once.

Therefore, the overall time complexity is linear with respect to the length of the input string, making it O(n).
- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity of the code is also O(n), where n is the length of the input string `address`. Here's the explanation:

1. The `output` variable is a string that is built up character by character within the loop.  
   
2. For each character in the input string, the code either appends the same character or appends "[.]" to the output string.  
   
3. The maximum length of the output string is proportional to the length of the input string.

Therefore, the space complexity is linear with respect to the length of the input string, making it O(n). Each character in the input string results in either a single character or a constant number of characters in the output string.
# Code
```
#include <string>

class Solution {
public:
    string defangIPaddr(string address) {
        string output = "";
        for(char c : address){
            if(c == '.'){
                output += "[.]";
            }
            else{
                output += c;
            }
        }
        return output;  // Don't forget to return the result
    }
};

```