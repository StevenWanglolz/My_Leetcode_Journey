# Approach

Index slicing

# Complexty

- Time complexity:
The time complexity of the provided code is O(N*M), where N is the number of words in the vector and M is the average length of the words.

Let's break down the factors contributing to this time complexity:

1. **Outer Loop (`for (auto w : words)`) - O(N):** The outer loop iterates over each word in the vector, where N is the number of words.

2. **Inner Loops (Two nested loops inside each conditional block) - O(M):** There are two inner loops inside each conditional block (odd length and even length), iterating up to the length of the word. The average length of the words is denoted by M.

3. **Checking Equality (`if (s1 == s2)`) - O(M):** The equality check between `s1` and `s2` takes O(M) time, where M is the length of the words.

Considering the worst case where both conditional blocks are executed for each word, the overall time complexity is O(N*M).

Note: If the lengths of the words are relatively constant (i.e., M can be treated as a constant), then the time complexity can be simplified to O(N).

- Space complexity:
The space complexity of the provided code is O(M), where M is the average length of the words.

Let's analyze the main factors contributing to the space complexity:

1. **Strings `s1` and `s2`:** These strings are used to store substrings of the original word. In the worst case, both strings may grow up to the length of the word. Therefore, the space complexity for these strings is O(M).

2. **Other Variables:** There are additional variables like `mid` and the loop counters, but these occupy constant space and do not depend on the length of the words.

Considering the space required for the strings `s1` and `s2` dominates the space complexity, the overall space complexity is O(M).
