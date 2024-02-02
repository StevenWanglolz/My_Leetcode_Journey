# Approach
<!-- Describe your approach to solving the problem. -->
Simple for-loop and if-else
# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The time complexity of the code is O(n) where n is the length of the input string.

This is because the code iterates over the input string once, and the number of operations performed inside the loop is constant. In particular, for each character in the input string, the code performs a constant number of comparisons and string concatenations. Therefore, the total time complexity of the code is O(n).

Here is a table that summarizes the time complexity of the code for different input sizes:

| Input size | Time complexity |
|---|---|
| n | O(n) |
- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity of the code is O(n) where n is the length of the input string.

This is because the code uses a constant amount of extra space regardless of the input size. The only data structures used in the code are a few variables to store the output string and the current character being processed. The size of these variables does not depend on the length of the input string. Therefore, the space complexity of the code is O(1).

Here is a table that summarizes the space complexity of the code for different input sizes:

| Input size | Space complexity |
|---|---|
| n | O(1) |
# Code
```Python []
class Solution:
    def interpret(self, command: str) -> str:
        o = ""
        for i, s in enumerate(command):
            if s == "G":
                o += "G"
            elif s == "(":
                if command[i+1] == ")":
                    o += "o"
                else:
                    o += "al"
        return o
```