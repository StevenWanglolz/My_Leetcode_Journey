# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The time complexity of the code is O(n), where n is the length of the input vector. This is because the outer loop iterates n times, and the inner loop iterates a constant number of times.

Here is a table that summarizes the time complexity of the code:

| Operation | Time Complexity |
|---|---|
| Outer loop | O(n) |
| Inner loop | O(1) |
| Total | O(n) |

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity of the code depends on whether we consider only the additional space used by the algorithm or the total space consumed by all data structures. Here are two perspectives:

**1. Additional Space Used by the Algorithm:**

The space complexity is **O(1)**. This is because the algorithm only uses a constant amount of additional space regardless of the input size. This includes:

- Two integer variables (`n` and `i`) for loop counters.
- A reference to the input vector (`nums`).
- A reference to the output vector (`v`).

While `v` has the same size as the input, it's considered constant in terms of space complexity analysis as its size is directly tied to the input size, not an additional data structure allocated solely for the algorithm's execution.

**2. Total Space Consumed:**

The space complexity of the given code is O(n), where n is the size of the input vector `nums`. Here's the breakdown:

1. **Input space (nums):**
   - The input vector `nums` is given as input to the function. Its space complexity is O(n), where n is the number of elements in the vector.

2. **Additional space (vector `v`):**
   - A new vector `v` of the same size as `nums` is created inside the function using `vector<int> v(n, 0);`. This vector is used to store the result of the operation.
   - The space required for vector `v` is also O(n) since it has the same number of elements as `nums`.

3. **Total Space Complexity:**
   - The overall space complexity is determined by the sum of the space complexities of the input and any additional data structures created. In this case, it is O(n) + O(n), which simplifies to O(n).

The code creates a new vector `v` to store the modified elements of `nums`. It doesn't use any additional data structures that scale with the input size, so the space complexity is linear with respect to the size of the input vector.

# Code

```C++ []
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n, 0);
        for(int i = 0; i < n; i++){
            v[i] = nums[nums[i]];
        }
        return v;
    }
};
```
