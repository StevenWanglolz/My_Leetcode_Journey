# Approach
<!-- Describe your approach to solving the problem. -->
1. Keep track of every character in allowed in ```l```.

2. Iterate through words character by character.

# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
1. The first loop runs through each character in the `allowed` string and appends it to the list `l`. The length of the `allowed` string is denoted as `m`.
2. The second loop runs through each word in the `words` list. For each character in the word, it checks if the character is not in the `l` list. If a character is not in the list, it breaks out of the inner loop. This results in a worst-case scenario where the inner loop runs for the maximum length of a word in the `words` list. Let's denote the maximum length of a word as `n`.
3. The overall time complexity is the product of the lengths of `allowed` and the maximum length of a word, i.e., O(m * n).

In summary, the time complexity of the given code is O(m * n), where `m` is the length of the `allowed` string, and `n` is the maximum length of a word in the `words` list.

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity of the code is O(N), where N is the length of the `allowed` string.

Let's break it down:

1. `l` is a list that stores each character from the `allowed` string. The size of this list will be at most the length of the `allowed` string. Therefore, the space complexity for creating the list `l` is O(N).

2. There are no additional data structures or allocations that scale with the input data size (like the length of the words array). The variables `count`, `a`, `w`, `c`, and `b` are constant in terms of space complexity.

Hence, the overall space complexity is dominated by the space used to store the characters in the `allowed` string, resulting in O(N).

# Code

```Python []
class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        l = []
        count = 0
        for a in allowed:
            l.append(a)
        for w in words:
            for c in w:
                b = True
                if c not in l:
                    b = False
                    break
            if b == True:
                count += 1
        return count

```
