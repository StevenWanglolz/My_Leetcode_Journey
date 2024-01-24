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
The time complexity of the algorithm is O(n), where n is the length of the input string `s`. This is because you iterate through each character in the string once, and each operation inside the loop (pushing to the stack, popping from the stack, and checking if the stack is empty) takes constant time.

Let's break down the time complexity:

- The `for` loop iterates through each character in the string once, and the loop runs in O(n) time.

- Inside the loop:
  - Pushing onto the stack (`stack.push()`) takes constant time.
  - Popping from the stack (`stack.pop()`) takes constant time.
  - Checking if the stack is empty (`stack.empty()`) takes constant time.
  - Accessing the top of the stack (`stack.top()`) takes constant time.

Since each operation inside the loop takes constant time, and you perform these operations n times, the overall time complexity is O(n).
- Space complexity
- The space complexity of this algorithm is O(n), where n is the length of the input string `s`. This is because the space used by the stack grows and shrinks based on the length of the input string.

Here's the breakdown:

- The primary data structure is a stack (`std::stack<char> stack`).
- In the worst case, when all opening parentheses/brackets are encountered first in the input string, the stack can grow up to the length of the input string.

- The space used by the stack is proportional to the number of opening parentheses/brackets in the string.

- Therefore, the space complexity is O(n), where n is the length of the input string `s`.

The rest of the variables and operations outside the stack are constant in terms of space complexity, so the dominant factor is the space used by the stack.
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