# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The time complexity of the code is O(n), where 'n' is the value of the variable `n`.

Explanation:

- The loop iterates 'n' times, and in each iteration, two elements are appended to the list 'l'.
- The operations inside the loop take constant time (appending elements to a list is O(1)), and the loop itself iterates 'n' times.
- Therefore, the overall time complexity is O(n).

In big O notation, we often ignore constant factors, and the time complexity is simplified to O(n) to indicate that the time required grows linearly with the input size.

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity of the code is also O(n), where 'n' is the value of the variable `n`.

Explanation:

- The list 'l' is the primary data structure used to store the shuffled elements.
- In each iteration of the loop, two elements are appended to the list. Since there are 'n' iterations, the total number of elements in the list is 2n.
- Therefore, the space complexity is proportional to the size of the list, which is O(n).

Just like the time complexity, we use O(n) to represent that the space required grows linearly with the input size, and constant factors are ignored.

# Code

```C++ []
class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        l = []
        for i in range(n):
            l.append(nums[i])
            l.append(nums[i+n])
        return l

```
