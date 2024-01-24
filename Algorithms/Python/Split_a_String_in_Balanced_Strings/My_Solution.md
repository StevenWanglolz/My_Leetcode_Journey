# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Use if and else to compare the amount an "R" and the amount of "L"
# Approach
<!-- Describe your approach to solving the problem. -->
1. Declare r, l to store the amount of "R"s and "L"s. string to store the string that will be added to the output list. And my_list to store the output list.
  
2. Use a for-loop to iterate through the string.

3. At the end of the for-loop, compare r and l. If r equals l, append the string to the output list.
   
4. After iterating through the list, use len(list) to get the number of strings in the list.
# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The time complexity of the code is O(N), where N is the length of the input string `s`. The reason for this is that the code iterates through each character in the string once, processing it and updating the variables accordingly.

Let's break down the main operations in the code:

1. **Iteration through the input string:**
   - The `for c in s` loop iterates through each character in the string once.

2. **Appending strings to the list:**
   - The `my_list.append(string)` operation appends the current string to the list. This operation takes constant time.

3. **Resetting variables:**
   - The variables `r`, `l`, and `string` are reset after each balanced substring is found.

Since each character in the input string is processed once, and the operations inside the loop (appending to the list, resetting variables) are constant time, the overall time complexity is O(N), where N is the length of the input string.
- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity of the code is O(N), where N is the length of the input string `s`. The primary contributor to the space complexity is the `my_list` list, which stores the balanced substrings found during the iteration.

Let's break down the main components contributing to the space complexity:

1. **List `my_list`:**
   - The list `my_list` stores the balanced substrings found during the iteration. In the worst case, each character in the input string may contribute to a new substring in the list. Therefore, the length of `my_list` can be at most N (the length of the input string).

2. **String `string`:**
   - The string `string` is used to build each balanced substring. In the worst case, its length may be proportional to the length of the input string. However, since it is reset after each balanced substring is found, the maximum length of `string` at any point is bounded by N.

3. **Variables `r` and `l`:**
   - The variables `r` and `l` are used to count the number of "R" and "L" characters in each substring. They contribute only constant space.

4. **Other constants:**
   - Other variables (`c`, loop indices, etc.) contribute constant space.

In summary, the primary space-consuming component is the `my_list` list, and the overall space complexity is O(N).
# Code
```
class Solution:
    def balancedStringSplit(self, s: str) -> int:
        r = 0
        l = 0
        string = ""
        my_list = []
        for c in s:
            if c == "R":
                string += c
                r += 1
            else:
                string += c
                l += 1
            if r == l: # * string finished, add to list
                my_list.append(string)
                r = 0 # * reset everything
                l = 0
                string = ""
                print(string)
        return len(my_list)
```