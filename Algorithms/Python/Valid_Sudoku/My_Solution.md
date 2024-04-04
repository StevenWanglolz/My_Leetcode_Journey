# Approach

Use a hash table to check if a number has appeared

# Complexity

- Time complexity:
O(1)
- Space complexity:
O(1)

# Code

```Python []
class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        # * Check row validity
        for r in board:
            ht = defaultdict(int)
            for c in r:
                if c != ".":
                    ht[c] += 1
            for k, v in ht.items():
                if v > 1:
                    print("row false")
                    return False

        # * Check column validity
        for r in range(9):
            ht = defaultdict(int)
            for c in range(9):
                if board[c][r] != ".":
                    ht[board[c][r]] += 1
            for k, v in ht.items():
                if v > 1:
                    print("column false")
                    return False

        # * Check matrix validity
        for i in range(0, 9, 3):
            for j in range(0, 9, 3):
                ht = defaultdict(int)
                for k in range(3):
                    for l in range(3):
                        if board[i+k][j+l] != ".":
                            ht[board[i+k][j+l]] += 1
                for k, v in ht.items():
                    if v > 1:
                        print("matrix false")
                        return False
        return True

```
