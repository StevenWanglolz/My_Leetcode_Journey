# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->

# Approach
<!-- Describe your approach to solving the problem. -->

# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
Let's analyze the time complexity of each method in the code:

1. **`__init__` method:**
   - The initialization of the matrix involves two nested loops, each running up to the length of the rows (`r`) and columns (`c`) of the input `rectangle`.
   - Therefore, the time complexity of the `__init__` method is O(r * c).

2. **`updateSubrectangle` method:**
   - This method also uses two nested loops, each running up to the difference between the specified row and column indices (`row2 - row1` and `col2 - col1`).
   - Therefore, the time complexity of the `updateSubrectangle` method is O((row2 - row1) * (col2 - col1)).

3. **`getValue` method:**
   - Accessing an element in a 2D list takes constant time, O(1).
   - Therefore, the time complexity of the `getValue` method is O(1).

Overall, the time complexity of the class is dominated by the most time-consuming operation, which is the initialization in the `__init__` method. Therefore, the overall time complexity for your class is O(r * c), where r is the number of rows and c is the number of columns in the input rectangle.

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
Let's analyze the space complexity of the code:

1. **`__init__` method:**
   - The primary space usage in the `__init__` method comes from the `self.m` matrix. You are creating a new matrix with dimensions `r` by `c`, where `r` is the number of rows and `c` is the number of columns in the input `rectangle`.
   - The space complexity of the `__init__` method is O(r * c) due to the space required for the matrix.

2. **`updateSubrectangle` method:**
   - The `updateSubrectangle` method doesn't introduce any additional space complexity apart from the input parameters. The loops and variables used within the method are constant in terms of space.

3. **`getValue` method:**
   - The `getValue` method also doesn't introduce any additional space complexity apart from the input parameters and the matrix access. The space used is constant.

Overall, the dominant contributor to space complexity is the matrix `self.m`. Therefore, the overall space complexity of the class is O(r * c), where `r` is the number of rows and `c` is the number of columns in the input rectangle.

# Code

```
#include <iostream>
#include <vector>

using namespace std;

class SubrectangleQueries {

public:
    vector<vector<int>> m; // * Initialize matrix

    SubrectangleQueries(vector<vector<int>>& rectangle) {
        int r = rectangle.size();
        int c = rectangle[0].size();
        m = vector<vector<int>>(r, vector<int>(c, 0)); // * Initialize matrix
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                m[i][j] = rectangle[i][j];
            }
        }
    }
    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        for(int i = row1; i < row2+1; i++){
            for(int j = col1; j < col2+1; j++){
                this->m[i][j] = newValue;
            }
        }
    }
    
    int getValue(int row, int col) {
        return this->m[row][col];
    }
};

```
