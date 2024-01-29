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
The time complexity of the code is O(M * N), where M and N are the number of rows and columns in the specified range, respectively.

This is because the nested loops iterate over all possible cells in the range, and each iteration takes constant time. The total number of iterations is M * N, hence the time complexity.

Here's a breakdown of the time complexity:

- The outer loop iterates `M` times, where M is the number of rows in the range.
- The inner loop iterates `N` times, where N is the number of columns in the range.
- Each iteration of the inner loop takes constant time to create a new string cell.

Therefore, the overall time complexity is O(M * N).

| Step            | Description                                    | Time Complexity |
| --------------- | ---------------------------------------------- | --------------- |
| Outer loop      | Iterates over rows                             | O(M)            |
| Inner loop      | Iterates over columns                          | O(N)            |
| String creation | Constant time per iteration                    | O(1)            |
| Total           | M * N iterations * constant time per iteration | O(M * N)        |
- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity of the code is dominated by the output list, which stores all the cells in the range. In the worst case, the range can cover the entire spreadsheet, resulting in an output list containing millions of cells. Therefore, the space complexity of the code is O(M * N), where M is the number of rows and N is the number of columns in the spreadsheet.

Here's a breakdown of the space complexity:

- The `output` list stores the cells in the range, and its size is directly proportional to the number of cells in the range.
- Other variables like `start_col`, `start_row`, `end_col`, and `end_row` use constant space.
- String concatenation in the loop has a negligible impact on space complexity as the strings are small.

Therefore, the space complexity is mainly determined by the size of the output list, which is O(M * N) in the worst case.

| Step                 | Description               | Space Complexity |
| -------------------- | ------------------------- | ---------------- |
| Output list          | Stores cells in the range | O(M * N)         |
| Other variables      | Constant space            | O(1)             |
| String concatenation | Negligible space          | O(1)             |
| Total                | Output list dominates     | O(M * N)         |
# Code
```C++ []
class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> output;
        string str = "";
        for(int i = 0; i < ((int)s[3]-(int)s[0]+1); i++){
            for(int j = 0; j < ((int)s[4]-(int)s[1]+1); j++){
                str += char(i + (int)s[0]);
                str += char(j + (int) s[1]);
                output.push_back(str);
                str = "";
            }
        }
        return output;
    }
};
```