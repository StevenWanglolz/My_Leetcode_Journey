# Credits to cheung4843

# Complexity

- Time complexity
- The code uses a dictionary `m` to keep track of the count of each number in the input list `nums`.

- The loop iterates through each element in `nums`. For each element, it updates the count in the dictionary and then checks for two values (`(n + k)` and `(n - k)`) in the dictionary using `m.get()`.

- The `get()` method has an average time complexity of O(1) for dictionaries in Python. However, the overall time complexity is influenced by the number of elements in `nums`.

- Inside the loop, there are constant-time operations for each iteration:
  - Updating the count in the dictionary (`O(1)`).
  - Performing two `get()` operations, each taking constant time (`O(1)`).

- Therefore, the overall time complexity is O(n), where n is the length of the input list `nums`. The dominant factor is the loop that iterates through each element in the list.

In summary, the time complexity of the `countKDifference` method is O(n), where n is the length of the input list `nums`.

- Space complexity
Let's analyze the space complexity of the provided Python code:

- The space complexity is influenced by the extra space used by the dictionary `m`.

- The dictionary stores the count of each unique number in `nums`. In the worst case, all numbers in `nums` are unique, and the dictionary would have a size equal to the number of elements in `nums`.

- Therefore, the space complexity is O(n), where n is the length of the input list `nums`.

- The variable `count` is a constant amount of space and does not depend on the size of `nums`, so it does not contribute significantly to the space complexity.

In summary, the space complexity of the `countKDifference` method is O(n), where n is the length of the input list `nums`, due to the space used by the dictionary.

# Code

```Python []
class Solution:
    def countKDifference(self, nums: List[int], k: int) -> int:
        count = 0
        m = {}
        for n in nums:
            if n in m:
                m[n] += 1
            else:
                m[n] = 1
            count += m.get((n + k), 0)
            count += m.get((n - k), 0)
        return count

```
