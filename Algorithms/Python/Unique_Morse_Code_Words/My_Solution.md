# Approach
<!-- Describe your approach to solving the problem. -->
1. Map the alphabet accordingly.

2. Store all morse code in a list.

# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
1. The first loop iterates through the lowercase English alphabet and creates a mapping between each character and its Morse code representation. This loop has a constant time complexity since it always iterates 26 times.

2. The second loop iterates through each word in the `words` list. For each character in a word, it performs a constant-time lookup in the `m` dictionary to find its Morse code representation. Since the loop is nested within the outer loop, the time complexity of the second loop is O(len(words) * average_word_length), where average_word_length is the average length of the words in the `words` list.

3. Inside the second loop, there is a string concatenation operation (s += m[c]). In Python, string concatenation takes O(n) time where n is the length of the resulting string. However, since the length of the Morse code for each character is constant, we can consider this operation to be O(1) within the context of this problem.

4. The check `if s not in result` involves checking membership in a list, and it takes O(k) time, where k is the length of the list. Since `result` is a list of Morse code strings, and the maximum number of Morse code representations is fixed at 26, we can also consider this operation as O(1) within the context of this problem.

Putting it all together, the overall time complexity of the code is O(26 + len(words) *average_word_length). In big-O notation, we focus on the dominant terms, so the time complexity is O(len(words)* average_word_length).

Note: The code could potentially be optimized further by using a set data structure instead of a list for `result`, as set membership tests generally have O(1) time complexity.

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
Let's analyze the space complexity of the provided Python code:

1. The `ml` list is a constant-size array representing the Morse code for each letter of the alphabet. Its space complexity is O(26), which can be simplified to O(1) because it's a constant size and does not depend on the input.

2. The `m` dictionary is used to map each lowercase English alphabet character to its Morse code representation. The size of this dictionary is also constant (26 entries), so its space complexity is O(1).

3. The `result` list is used to store unique Morse code representations. In the worst case, this list could potentially store all unique Morse code representations for all words in the `words` list. Therefore, the space complexity of `result` is proportional to the number of unique Morse code representations, which is determined by the input. In the worst case, if all words have unique Morse code representations, the space complexity would be O(len(words) * average_word_length).

4. The `count` variable is an integer and requires constant space.

Putting it all together, the overall space complexity is O(1) for the constant-size data structures (`ml` and `m`), and O(len(words) * average_word_length) for the `result` list.

Note: The `print(s)` statement does not contribute to the space complexity, as it is for debugging purposes and can be removed without affecting the analysis.

# Code

```Python []
class Solution:
    def uniqueMorseRepresentations(self, words: List[str]) -> int:
        ml = [".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--",
              "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."]
        m = {}
        result = []
        count = 0
        for i in range(26):
            m[chr(i+97)] = ml[i]  # * Map the alphabet
        for w in words:
            s = ""
            for c in w:
                s += m[c]
            print(s)
            if s not in result:
                count += 1
                result.append(s)
        return count

```
