# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Use the split function to tokenize the sentences.
# Approach
<!-- Describe your approach to solving the problem. -->
1. Create an integer to store the maximum number of sentences.  
   
2. Loop through the entire list.  
   
3. Use the split function to tokenize the sentence.  
   
4. Compare the current number with max everytime.
# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The time complexity of your algorithm is O(n * m), where n is the number of sentences in the input list `sentences`, and m is the maximum number of words in a single sentence.

Here's the breakdown:

- The `for` loop iterates through each sentence in the list, so it runs in O(n) time.
- The `split()` method is used to split each sentence into words, and the length of the resulting list is calculated. This operation takes O(m) time, where m is the number of words in the longest sentence.

Since both the loop and the `split()` operation are nested, the overall time complexity is O(n * m).

Therefore, the time complexity of this algorithm is O(n * m), where n is the number of sentences, and m is the maximum number of words in a single sentence in the input list `sentences`.
- Space complexity:
- The space complexity of this algorithm is O(1), or constant space. This is because the amount of additional memory used by the algorithm does not depend on the size of the input.

Here's the breakdown:

- The primary variable is `max`, which is an integer storing the maximum number of words found in a sentence. This integer variable uses constant space.

- The loop variable `s` is a reference to each sentence in the input list. It does not contribute to additional space complexity because it is just a reference.

- The `split()` method is used to split each sentence into words, but it doesn't use additional space proportional to the size of the input. The method returns a list of words, but it doesn't create a new data structure that grows with the input size.

Since the space used by the variables is constant and does not grow with the size of the input, the space complexity is O(1).
# Code
```
class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        max = 0
        for s in sentences:
            if len(s.split()) > max:
                max = len(s.split())
        return max
```