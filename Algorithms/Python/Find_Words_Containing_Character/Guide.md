# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Iterate through the list and see if the element contains the specified character
# Approach
<!-- Describe your approach to solving the problem. -->
1. At first I used list.index to retrieve the corresponding index, but later on realized that it retrieves the index of the **first occurece** of the element, therefore it fails for the final test case.
2. Use ```for i, s in enumerate(list):``` instead.  
I is the index you need to retrieve.
# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The time complexity of this algorithm is O(n * m), where n is the number of words in the input list `words`, and m is the average length of a word.

Here's the breakdown:

- The `for` loop iterates through each word in the list, so it runs in O(n) time.
- The `in` operator inside the loop checks if the character `x` is present in the current word. This operation takes O(m) time in the worst case, where m is the length of the current word.
- Since both the loop and the `in` operator are nested, the overall time complexity is O(n * m).

Therefore, the time complexity of your code is O(n * m), where n is the number of words, and m is the average length of a word in the input list `words`.
- Space complexity:
- The space complexity of your code is O(1), or constant space. This is because the amount of additional memory used by the algorithm does not depend on the size of the input.

Here's the breakdown:

- The primary variable is `l`, which is a list storing the indices of words containing the character `x`. The space used by this list is proportional to the number of words that satisfy the condition. In the worst case, it might be the same size as the input list, but it doesn't grow with the size of the input.
  
- The loop variables `i` and `s` do not contribute to additional space complexity because they are just references to elements in the input list.

Since the space used by the list `l` is the primary factor, and it doesn't grow with the size of the input, the space complexity remains constant. Therefore, the space complexity is O(1).
# Code
```
class Solution:
    def findWordsContaining(self, words: List[str], x: str) -> List[int]:
        l = []
        for i, s in enumerate(words):
            if x in s:
                l.append(i)
        return l
        
```
