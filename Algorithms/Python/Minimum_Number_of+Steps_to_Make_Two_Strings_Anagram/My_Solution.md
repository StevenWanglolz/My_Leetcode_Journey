# Approach
<!-- Describe your approach to solving the problem. -->
1. Create a hashmap(character, number) for s and t ```d1``` and ```d2```.

2.If the number of map[character] in d1 is bigger than d2, calculate the difference and add it to output.

# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The time complexity of the code is O(n), where n is the length of the input strings `s` and `t`.

Here's the breakdown:

1. The first loop initializes two dictionaries, `d1` and `d2`, with constant time complexity O(1) because it always iterates over a fixed number of characters (26 in this case).

2. The second and third loops iterate over the characters in strings `s` and `t` to populate the dictionaries `d1` and `d2`, respectively. Both of these loops have a time complexity of O(n), where n is the length of the input strings.

3. The fourth loop iterates over the items in `d1` and compares the counts. This loop also has a time complexity of O(1) because it iterates over a fixed number of characters (26).

Therefore, the dominant term is the loop that iterates over the characters in strings `s` and `t`, resulting in an overall time complexity of O(n).

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity of the code is O(1) or O(k), where k is a constant (26 in this case).

Here's the breakdown:

1. The dictionaries `d1` and `d2` have a constant size of 26, which doesn't depend on the length of the input strings. Therefore, their space complexity is considered O(1) or O(k), where k is a constant.

2. The variable `output` is constant in size and does not depend on the length of the input strings. It contributes O(1) to the space complexity.

Overall, the space complexity is constant, making it O(1) or O(k).

# Code

```Python []
class Solution:
    def minSteps(self, s: str, t: str) -> int:
        output = 0
        d1 = {}
        d2 = {}
        for i in range(97, 123):
            d1[chr(i)] = 0
            d2[chr(i)] = 0
        for c in s:
            d1[c] += 1
        for c in t:
            d2[c] += 1
        for k, v in d1.items():
            if d1[k] > d2[k]:
                output += d1[k] - d2[k]
        return output

```
