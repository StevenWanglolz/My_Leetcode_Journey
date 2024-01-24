***This solution is an interpretation of someone else's.  
I did not solve this problem in time***

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
The time complexity of this algorithm is O(n), where n is the length of the input string `s`. This is because you iterate through each character in the string once, and each operation inside the loop (appending to the stack, popping from the stack, and checking if the stack is empty) takes constant time.

Here's the breakdown:

- The `for` loop iterates through each character in the string once, and the loop runs in O(n) time.

- Inside the loop:
  - Appending to the stack (`stack.append()`) takes constant time.
  - Popping from the stack (`stack.pop()`) takes constant time.
  - Checking if the stack is empty (`not stack`) takes constant time.
  - Accessing the last element of the stack (`stack[-1]`) takes constant time.

Since each operation inside the loop takes constant time, and you perform these operations n times, the overall time complexity is O(n).
- Space complexity:
- The space complexity of this algorithm is O(n), where n is the length of the input string `s`. This is because the space used by the stack can grow linearly with the size of the input.

Here's the breakdown:

- The primary data structure is a stack (`stack`). In the worst case, the stack can grow up to the length of the input string.

- The space used by the stack is proportional to the number of opening parentheses/brackets in the string.

- Therefore, the space complexity is O(n), where n is the length of the input string `s`.

The rest of the variables and operations outside the stack are constant in terms of space complexity, so the dominant factor is the space used by the stack.
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
