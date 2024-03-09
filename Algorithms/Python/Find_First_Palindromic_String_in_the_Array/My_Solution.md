# Approach

Index slicing

# Complexity

- Time complexity:
The time complexity of the provided code is O(N * M), where N is the number of words and M is the average length of the words.

Here's the breakdown:

1. **Outer Loop (`for w in words`):** The outer loop runs N times, where N is the number of words in the list. This contributes O(N) to the time complexity.

2. **Inner Loop (Building substrings `s1` and `s2`):** The inner loop constructs two substrings `s1` and `s2` for each word. The length of these substrings can be up to M, where M is the average length of the words. Therefore, the inner loop contributes O(M) to the time complexity.

Since the inner loop is nested within the outer loop, the overall time complexity is O(N * M).

- Space complexity:
The space complexity of the provided code is O(M), where M is the average length of the words.

Here's the breakdown:

1. **Strings `s1` and `s2`:** The space required to store these strings is proportional to the length of the words. In the worst case, each word's `s1` and `s2` can be as long as M (average length of words). Therefore, the space complexity for these strings is O(M).

2. **Other Variables (`n`, `mid`, `w`):** The space required for these variables is constant and does not depend on the length of the words. Therefore, their contribution to space complexity is negligible.

Since the primary factor influencing space complexity is the length of the strings in `s1` and `s2`, the overall space complexity is O(M).
