# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Use a simple if else to determine if the character in the string is a "."
# Approach
<!-- Describe your approach to solving the problem. -->
1. Create a string to store the output.

2.  Use a for loop to iterate through the entire address.  
     
3. Use if else to determine whether the current characer is a "." 
     
4. Return
# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The time complexity of the code is O(n), where n is the length of the input IP address.

Explanation:

1. The code uses a loop to iterate over each character in the input IP address (`address`).
2. For each character, it performs a constant amount of work (checking if it's a dot and appending characters accordingly).
3. The loop iterates through each character exactly once.

Therefore, the overall time complexity is linear with respect to the length of the input IP address, making it O(n).
- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity of the code is also O(n), where n is the length of the input IP address.

Explanation:

1. The `output` variable is a string that is built up character by character within the loop.
2. For each character in the input IP address, the code either appends the same character or appends "[.]" to the output string.
3. The maximum length of the output string is proportional to the length of the input IP address.

Therefore, the space complexity is linear with respect to the length of the input IP address, making it O(n).
# Code
```
class Solution:
    def defangIPaddr(self, address: str) -> str:
        output = ""
        for i in range(0, len(address)):
            if address[i] == ".":
                output += "[.]"
            else:
                output += address[i]
        return output
```