# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Focus on the x axis

# Approach
<!-- Describe your approach to solving the problem. -->
1. Append all x values to the list

2. Calculate the differences between each x value and return the maximum.

# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The time complexity of the code is determined by the sorting operation, which is the dominant factor in terms of time complexity. Let's analyze it:

1. **Creating the `l` list:** This operation takes O(n) time since it involves iterating through all n points to extract their x-coordinates.

2. **Sorting the `l` list:** The sorting operation takes O(n log n) time using the Python built-in `sort` method.

3. **Iterating through the sorted list:** The loop that calculates differences and finds the maximum width also takes O(n) time.

Therefore, the overall time complexity is dominated by the sorting operation, and the final time complexity is O(n log n).

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
1. **List `l`:** The space complexity is O(n) due to the list `l`, which stores the x-coordinates of the points. Each point's x-coordinate is stored in the list.

2. **Variables (`n`, `m`, `i`, `diff`):** These variables have constant space requirements, so they contribute O(1) to the space complexity.

Overall, the space complexity is dominated by the list `l`, resulting in a space complexity of O(n) due to the linear growth of the input size.

In summary, the space complexity of the code is O(n).

# Code

```Python []
class Solution:
    def maxWidthOfVerticalArea(self, points: List[List[int]]) -> int:
        n = len(points)
        l = [points[i][0] for i in range(n)]
        l.sort()

        m = 0
        for i in range(1, n):
            diff = l[i] - l[i - 1]
            m = max(m, diff)

        return m
```
