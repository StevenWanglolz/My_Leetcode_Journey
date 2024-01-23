# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Look up a function that concatenates a list in Python
# Approach
<!-- Describe your approach to solving the problem. -->
1. Use the extend() function and extend itself.
# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The time complexity of the code is O(n), where n is the length of the input list `nums`. Here's the explanation:

1. The `extend` method is used to concatenate the original list `nums` with itself.  
   
2. The `extend` method has a time complexity proportional to the length of the iterable being added. In this case, it's proportional to the length of the original `nums` list.

Therefore, the time complexity is linear with respect to the length of the input list, making it O(n). The `extend` operation traverses each element in the original list once to add them to the extended list.
- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity of the code is O(n), where n is the length of the input list `nums`. Here's the explanation:

1. The `extend` method modifies the original list in-place without creating a new list.  
   
2. The extended list contains twice the number of elements as the original list.  
   
3. The space required for the extended list is directly proportional to the length of the original list.

Therefore, the space complexity is linear with respect to the length of the input list, making it O(n). No additional space is used besides the original list, and the space needed is directly proportional to the input size.
# Code
```
class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        nums.extend(nums)
        return nums    
```