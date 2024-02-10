# Approach
<!-- Describe your approach to solving the problem. -->
1. Keep track of all of the indices that contains a laser beam in a list.

2. Iterate through the list.

# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The time complexity of the code is O(m * n), where m is the number of rows in the bank and n is the number of columns.

This is because the outer loop iterates over the rows of the bank, and the inner loop iterates over the columns. The nested loops have a combined time complexity of O(m * n).

The rest of the code does not contribute significantly to the time complexity, as it only involves constant-time operations or operations that are linear in the size of the input.

Here is a table that summarizes the time complexity of each part of the code:

| Code | Time complexity |
|---|---|
| Outer loop | O(m) |
| Inner loop | O(n) |
| Total | O(m * n) |

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity of the code is O(m), where m is the number of rows in the bank.

This is because the code only uses a constant amount of extra space, regardless of the size of the input. The only data structure that is used is a one-dimensional array of size m to store the number of lasers in each row. The size of this array does not depend on the number of columns in the bank, or the total number of elements in the bank.

Here is a table that summarizes the space complexity of each part of the code:

| Code | Space complexity |
|---|---|
| row_lasers array | O(m) |
| Total | O(m) |

# Code

```C++ []
class Solution
{
public:
    int numberOfBeams(vector<string> &bank){
        int m = bank.size();
        int n = bank[0].size();
        int a, b, output = 0;
        vector<int> v;
        for (int i = 0; i < m; i++){
            if (bank[i].find('1') != string::npos){
                v.push_back(i); // * Keep track of the indices
            }
        }
        if (!v.empty()){
            for (int i = 0; i < v.size() - 1; i++){
                a = 0;
                b = 0;
                for (int j = 0; j < n; j++){
                    if (bank[v[i]][j] == '1'){
                        a++;
                    }
                }
                for (int k = 0; k < n; k++){
                    if (bank[v[i + 1]][k] == '1'){
                        b++;
                    }
                }
                output += a * b;
            }
        }
        else{
            return output;
        }
        cout << output << endl;
        return output;
    }
};
```
