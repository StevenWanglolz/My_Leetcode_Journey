
# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The time complexity of the code is O(n^2), where n is the length of the input list `nums`. This is because, for each element in `nums`, the code iterates over all elements in `nums` to count the number of elements smaller than the current one.

- The outer loop runs `n` times, where `n` is the length of the input list `nums`.
- The inner loop also runs `n` times for each iteration of the outer loop.

As a result, the total number of iterations is approximately n * n, leading to a quadratic time complexity of O(n^2). This may become inefficient for large input sizes.

If you're interested in improving the time complexity, you can consider alternative approaches such as sorting or using additional data structures to achieve a more efficient solution.

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The time complexity of the code is O(n^2), where n is the length of the input list `nums`. This is because, for each element in `nums`, the code iterates over all elements in `nums` to count the number of elements smaller than the current one.

- The outer loop runs `n` times, where `n` is the length of the input list `nums`.
- The inner loop also runs `n` times for each iteration of the outer loop.

As a result, the total number of iterations is approximately n * n, leading to a quadratic time complexity of O(n^2). This may become inefficient for large input sizes.

# Code

```
class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        o = []
        for n in nums:
            c = 0
            for x in nums:
                if n > x:
                    c += 1
            o.append(c)
        return o
```
