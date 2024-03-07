# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->

# Approach
<!-- Describe your approach to solving the problem. -->

# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The time complexity of the code is O(N), where N is the number of elements in the input list `nums`. Let's break down the time complexity:

1. The first loop iterates through all elements in `nums` once, checking and appending elements less than the pivot. This takes O(N) time.

2. The second loop iterates through all elements in `nums` again, checking and appending elements equal to the pivot. This also takes O(N) time.

3. The third loop iterates through all elements in `nums` once more, checking and appending elements greater than the pivot. This takes O(N) time.

The overall time complexity is the sum of the complexities of these three loops, which simplifies to O(N).

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity of the code is O(N), where N is the number of elements in the input list `nums`. The space complexity is dominated by the additional list `l` used to store the elements during the three loops.

In each loop, the code appends elements to the list `l`. The maximum size of the list is proportional to the number of elements in the input list `nums`. Therefore, the space complexity is linear in terms of the input size, resulting in O(N) space complexity.

# Code

```
class Solution:
    def pivotArray(self, nums: List[int], pivot: int) -> List[int]:
        l = []
        for i in range(len(nums)):
            if nums[i] < pivot:
                l.append(nums[i])
        for i in range(len(nums)):
            if nums[i] == pivot:
                l.append(nums[i])
        for i in range(len(nums)):
            if nums[i] > pivot:
                l.append(nums[i])
        return l

```
