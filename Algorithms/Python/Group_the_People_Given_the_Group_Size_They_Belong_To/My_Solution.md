# I recommend checking other people's solutions

# Approach
<!-- Describe your approach to solving the problem. -->
- Keep track of all the numbers in the list.

- Run through them one by one.

# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
1. **Initialization of dictionary `d`:** This loop runs 500 times, which is a constant number. Therefore, it contributes O(1) to the time complexity.

2. **Setting values in dictionary `d`:** This loop runs `len(groupSizes)` times, where `len(groupSizes)` is the number of elements in the `groupSizes` list. This contributes O(len(groupSizes)) to the time complexity.

3. **Building the list `l2`:** This loop iterates over the dictionary items, which has a maximum of 500 items. Therefore, it contributes O(500) or O(1) to the time complexity.

4. **Building the output list `o`:** This loop runs `len(groupSizes)` times and performs constant-time operations within the loop. It contributes O(len(groupSizes)) to the time complexity.

The overall time complexity is dominated by the loop that sets values in the dictionary and the loop that builds the output list. Therefore, the final time complexity is O(len(groupSizes)).

It's important to note that using a fixed-size dictionary with 500 keys may not be necessary, and the code could potentially be optimized further. If the maximum group size is known, you could use a dictionary with a smaller size to improve space efficiency.

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
1. **Dictionary `d`:** The dictionary `d` has a fixed size of 500 keys, and each key is associated with a Boolean value. This contributes O(500) or O(1) to the space complexity since the size of the dictionary is constant.

2. **List `l2`:** The list `l2` stores keys from the dictionary, and its size can be at most 500 (maximum number of keys). It contributes O(500) or O(1) to the space complexity.

3. **List `o`:** The list `o` stores the groups, and its size is determined by the number of elements in the input `groupSizes`. In the worst case, all elements have unique group sizes, leading to a maximum space complexity of O(len(groupSizes)).

In summary, the space complexity is primarily dominated by the sizes of the dictionary `d`, list `l2`, and list `o`. Therefore, the overall space complexity is O(1) due to the constant size of the dictionary and the fixed-size lists. However, if considering the variable-sized list `o`, the space complexity becomes O(len(groupSizes)).

# Code

```Python []
class Solution:
    def groupThePeople(self, groupSizes: List[int]) -> List[List[int]]:
        d = {}
        o = []
        for i in range(500): # * Initialize dictionary
            d[i] = False
        for i in range(len(groupSizes)):
            if d[groupSizes[i]] == False:
                d[groupSizes[i]] = True
        l2 = []
        for k, v in d.items():
            l = []
            if v == True:
                l2.append(k)
        for k in l2:
            count = 0
            for i in range(len(groupSizes)):
                if groupSizes[i] == k:
                    l.append(i)
                    count += 1
                    if count == k:
                        o.append(l) # * Append group to list
                        count = 0
                        l = []
        return o

```
