# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Use two for-loops and play with the indices
# Approach
<!-- Describe your approach to solving the problem. -->
1. Create a list to store the output and a string to be appended to the list.  

2. The outer for-loop iterates through the columns.

3. The inner for-loop iterate through the rows.

4. Append the cells accordingly and reset the string after every cell.
# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The time complexity of the provided code is O(M * N), where M is the number of rows and N is the number of columns in the range specified by the input string.

This is because the nested loops iterate over all possible cells in the range, and the inner loop iterates N times for each iteration of the outer loop. The total number of iterations is therefore M * N.

Here is a table that summarizes the time complexity of the code:

| Input size        | Time complexity |
| ----------------- | --------------- |
| M rows, N columns | O(M * N)        |
- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
Sure. The space complexity of the provided code is also O(M * N), where M is the number of rows and N is the number of columns in the range specified by the input string.

This is because the code creates a list `l` to store all the generated cells. In the worst case, the list will contain all possible cells in the range, which is M * N. Therefore, the space complexity is O(M * N).

Here is a table that summarizes the space complexity of the code:

| Input size        | Space complexity |
| ----------------- | ---------------- |
| M rows, N columns | O(M * N)         |

# Code
``` Python []
class Solution:
    def cellsInRange(self, s: str) -> List[str]:
        l = []
        output = ""
        for i in range (ord(s[3])-ord(s[0])+1):
            for j in range(int(s[4])-int(s[1])+1):
                output += chr(i+ord(s[0]))
                output += str(j + int(s[1])) 
                l.append(output) 
                output = ""      
        return l
```