***This solution is an interpretation of someone else's.  
I did not solve this problem in time**
## Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Recognize that the data structure required is a stack
## Approach
<!-- Describe your approach to solving the problem. -->
1. Create a stack (include stack)
2. Recognize the two different situations(open and close parentheses)
3. First determine if the stack is empty, which means there is not a matching parenthesis in the stack.
4. Scecondly, deteremine whether the top of the stack matches the incoming closing parenthesis.
## Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
O(n)  
Loops through the string once
## Code
```
#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for(int i = 0; i < s.length();i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                stack.push(s[i]);
            }
            else{
                if(stack.empty() ||\
                (s[i] == ')' && stack.top() != '(') || \
                (s[i] == ']' && stack.top() != '[') || \
                (s[i] == '}' && stack.top() != '{')){
                    return false;
                }
                stack.pop();
            }
        }
        return stack.empty();
    }
};
```