# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->

# Approach
<!-- Describe your approach to solving the problem. -->

# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
Let's analyze the time complexity of each operation in the code:

1. **Construction (`SubrectangleQueries` constructor):**
   - The constructor initializes the matrix `m` with dimensions `r` by `c` and copies the values from the input rectangle to the matrix.
   - The time complexity of the constructor is O(r * c), where `r` is the number of rows and `c` is the number of columns in the input rectangle.

2. **`updateSubrectangle` method:**
   - The `updateSubrectangle` method iterates over a subrectangle defined by `row1`, `col1`, `row2`, and `col2`, and updates each element to the `newValue`.
   - The number of elements in the subrectangle is (row2 - row1 + 1) * (col2 - col1 + 1).
   - Therefore, the time complexity of `updateSubrectangle` is O((row2 - row1 + 1) * (col2 - col1 + 1)).

3. **`getValue` method:**
   - Accessing an element in a 2D vector takes constant time, O(1).
   - Therefore, the time complexity of `getValue` is O(1).

Overall, the time complexity of the entire class is dominated by the most time-consuming operation, which is the initialization in the constructor. Therefore, the overall time complexity for your class is O(r * c), where `r` is the number of rows and `c` is the number of columns in the input rectangle.

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
Let's analyze the space complexity of the code:

1. **Matrix Initialization (`SubrectangleQueries` constructor):**
   - The space complexity of the matrix `m` is O(r * c), where `r` is the number of rows and `c` is the number of columns in the input rectangle.
   - Additionally, the space complexity of the input `rectangle` is O(r * c), as you are copying its values to the matrix.

2. **`updateSubrectangle` method:**
   - The `updateSubrectangle` method doesn't introduce any additional space complexity. It uses a constant amount of space for loop counters and variables.

3. **`getValue` method:**
   - The `getValue` method doesn't introduce any additional space complexity. It uses a constant amount of space for function parameters and return variables.

Overall, the dominant contributor to space complexity is the matrix `m`. Therefore, the overall space complexity of your class is O(r * c), where `r` is the number of rows and `c` is the number of columns in the input rectangle.

# Code

```
class SubrectangleQueries:

    def __init__(self, rectangle: List[List[int]]):
        r = len(rectangle)
        c = len(rectangle[0])
        self.m = [[0 for i in range(c)] for j in range(r)] # * Initialize the matrix

        for i in range(r):
            for j in range(c):
                self.m[i][j] = rectangle[i][j]

    def updateSubrectangle(self, row1: int, col1: int, row2: int, col2: int, newValue: int) -> None:
        for i in range(row1, row2+1):
            for j in range(col1, col2+1):
                self.m[i][j] = newValue
    def getValue(self, row: int, col: int) -> int:
        return self.m[row][col]
```
