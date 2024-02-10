# Approach
<!-- Describe your approach to solving the problem. -->
1. Keep track of all of the indices that contains a laser beam in a list.

2. Iterate through the list.

# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The time complexity of the code is **O(n * m)**, where:

- **n** is the number of rows in the `bank` list (representing the number of lights)
- **m** is the number of columns in each row of the `bank` list (representing the length of each row)

Let's break down the complexity of each part:

1. **Initialization:** `len(bank)` and `len(bank[0])` are called once, each taking O(n) and O(m) respectively. This contributes a constant-factor term to the overall complexity.
2. **Inner loop (adding elements to `l`):** This loop iterates at most `n` times (once for each row). Within the loop, checking if the row is full ("0"*col) takes O(m) time. So, this part has a complexity of O(n* m).
3. **Outer loop (calculating number of beams):** This loop iterates at most `n-1` times (between all pairs of rows). Calculating the number of "1"s in each row takes O(m) time. The multiplication also takes O(1) time. So, this part has a complexity of O((n-1) *m) which simplifies to O(n* m) since n is dominant.
4. **Return statement:** This is a constant-time operation.

Therefore, the overall time complexity is dominated by the nested loops, hence **O(n * m)**.

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity of the code is **O(n)**, where n is the number of rows in the `bank` list.

Let's analyze the memory usage of each part:

1. **Variables:** The code uses a constant number of variables like `row`, `col`, `output`, and temporary variables within the loops. These contribute a constant space complexity.
2. **List `l`:** In the worst case, `l` can store all row indices (n elements). Therefore, its space complexity is O(n).
3. **No additional data structures:** The code doesn't create any other significant data structures beyond `l`.

Therefore, the space complexity is dominated by the `l` list, so it is **O(n)**.

# Code

```Python []
class Solution:
    def numberOfBeams(self, bank: List[str]) -> int:
        row = len(bank)
        col = len(bank[0])
        l = []
        output = 0
        for i in range(row):
            if bank[i] != "0"*col: 
                l.append(i) # * Keep track of all indices
        for i in range(len(l)-1):
            a, b = 0, 0
            for c in bank[l[i]]:
                if c == "1":
                    a += 1
            for c in bank[l[i+1]]:
                if c == "1":
                    b += 1
            output += a*b # * Add the number of lasers
        return output
```
