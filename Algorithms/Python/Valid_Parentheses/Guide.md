## Intuition
Recognize that the data strcture is a stack.
## Approach
1. Use lists, list.append(), list.pop() to perform stack operations.
2. Use a for c in s loop to go through the string
3. Identify the different situations of the character
4. if "([{", push, otherwise they can only be ")]}".
5. In the else option, first check if the stack is empty(parentheses don't match)
6. And then check if the top of the list matches the incoming parenthesis.
## Complexity
Time complexity:
O(n)
Loops through the entire string once
## Code
````
class Solution(object):
    def isValid(self, s):
        stack = []
        for c in s:
            if c in"([{":
                stack.append(c)
            else:
                if not stack or \
                (c == ")" and stack[-1] != "(") or\
                (c == "]" and stack[-1] != "[") or\
                (c == "}" and stack[-1] != "{"):
                    return False
                stack.pop()
        return not stack
                
````
