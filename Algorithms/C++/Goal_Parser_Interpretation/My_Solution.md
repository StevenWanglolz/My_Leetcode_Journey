# Approach
<!-- Describe your approach to solving the problem. -->
Simple for-loop and if-else
# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The time complexity of the code is O(n) where n is the length of the input string.

This is because the code iterates over the input string once, and the number of operations performed inside the loop is constant. In particular, for each character in the input string, the code performs a constant number of comparisons and string concatenations.

Here is a table that breaks down the time complexity of the code:

| Operation | Time complexity |
|---|---|
| Iterating over the input string | O(n) |
| Comparisons inside the loop | O(1) |
| String concatenations inside the loop | O(1) |

Therefore, the overall time complexity of the code is O(n).
- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity of the code is O(n) where n is the length of the input string.

This is because the code allocates space for the output string, which can grow up to be the same length as the input string. Additionally, the code allocates space for a few variables, such as the current character and the index of the current character. However, the amount of space used by these variables is constant, regardless of the length of the input string.

Here is a table that breaks down the space complexity of the code:

| Variable | Space complexity |
|---|---|
| output string | O(n) |
| current character | O(1) |
| index of the current character | O(1) |
# Code
```C++ []
class Solution {
public:
    string interpret(string command) {
        string o = "";
        for(int i = 0; i < command.size(); i++){
            if(command[i] == 'G'){
                o += "G";
            }
            else if(command[i] == '('){
                if(command[i+1] == ')'){
                    o += "o";
                }
                else{
                    o += "al";
                }
            }
        }
        return o;
    }
};
```