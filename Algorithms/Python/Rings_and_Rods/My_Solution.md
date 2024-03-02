# Approach
<!-- Describe your approach to solving the problem. -->
1. Create a map{int, sting} and initialize it as {0 to 9, ""}

2. Iterate through rings and determine if the index is odd or even.

If the index is even, add the ring and color to the map accordingly.

# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
1. The first loop initializes a dictionary `m` with 10 keys, and each key is associated with an empty string. This part has a constant time complexity of O(1).

2. The second loop iterates through the input string `rings`. Since it loops through each character of the string once, the time complexity is O(len(rings)).

3. The third loop iterates through the keys and values of the dictionary `m`. The dictionary has a constant size (10 keys), so the time complexity is O(1) for this loop.

The overall time complexity is dominated by the second loop, so the final time complexity is O(len(rings)).

In big O notation, we simplify to the dominant term, and in this case, it's O(len(rings)).

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
1. The variable `m` is a dictionary that is initialized with 10 keys. As the size of the dictionary is constant and not dependent on the input size, the space complexity for this part is O(1).

2. The variable `count` is an integer, and its space complexity is also O(1) since it doesn't depend on the input size.

3. The space used by the input `rings` is O(len(rings)) as it depends on the size of the input string.

Therefore, the overall space complexity is O(len(rings)), dominated by the space required for the input string. The other variables (`m` and `count`) contribute constant space.

# Code

```Python []
class Solution:
    def countPoints(self, rings: str) -> int:
        m = {}
        count = 0
        for i in range(10):
            m[i] = ""
        for i in range(len(rings)):
            if i % 2 == 0:
                m[int(rings[i+1])] += rings[i]
        for k, v in m.items():
            if "R" in v and "G" in v and "B" in v:
                count += 1
        return count

```
