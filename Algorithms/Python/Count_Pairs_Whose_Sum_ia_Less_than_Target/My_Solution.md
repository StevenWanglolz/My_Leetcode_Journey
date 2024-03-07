# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The time complexity of the code is O(n^2), where "n" is the length of the input list `nums`. This is because there are two nested loops that iterate through the elements of the `nums` list.

The outer loop runs "n" times, and for each iteration of the outer loop, the inner loop runs "n-i-1" times (where "i" is the current index of the outer loop). As a result, the total number of iterations is the sum of the first "n-1" integers, which is approximately (n^2)/2 for large values of "n."

Therefore, the overall time complexity is O(n^2), indicating a quadratic growth rate with the size of the input list. This can be inefficient for large lists as the number of operations increases quadratically with the size of the input.

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity of the code is O(1), which is constant. This is because the amount of additional space used by the algorithm remains constant regardless of the size of the input list `nums`.

The only variable used in the code is `count`, and there are no data structures or arrays whose size depends on the input. The algorithm does not use any extra memory proportional to the input size, and it does not scale with the size of the input list.

Therefore, the space complexity is O(1), indicating constant space usage.

# Code

```Python []
class Solution:
    def countPairs(self, nums: List[int], target: int) -> int:
        count = 0
        for i in range(len(nums)):
            for j in range(i+1, len(nums)):
                if nums[i]+nums[j] < target:
                    count += 1
        return count

```
