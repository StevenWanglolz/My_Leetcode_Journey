# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The given code implements the shuffle operation on an array of length `2n`, where the first `n` elements are to be interleaved with the next `n` elements. The time complexity of the code is O(n), where 'n' is the length of the array divided by 2.

Explanation:

- The loop iterates 'n' times, and in each iteration, two elements are added to the list 'l'. Therefore, the number of operations performed in the loop is proportional to 'n'.
- Appending elements to a list is generally an O(1) operation, and the loop itself is O(n).
- Thus, the overall time complexity is O(n).

In big O notation, we often ignore constant factors, and in this case, the time complexity is simplified to O(n).

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity of the code is O(n), where 'n' is the length of the array divided by 2.

Explanation:

- The list 'l' is the primary data structure used to store the shuffled elements.
- In each iteration of the loop, two elements are appended to the list. Since there are 'n' iterations, the total number of elements in the list is 2n.
- Therefore, the space complexity is proportional to the size of the list, which is O(n).

Note that the space complexity does not depend on the constant factors, and it's represented as O(n) to indicate that the space required grows linearly with the input size.

# Code

``` Python []
class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        l = []
        for i in range(n):
            l.append(nums[i])
            l.append(nums[i+n])
        return l

```
