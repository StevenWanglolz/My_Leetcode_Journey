# Approach
<!-- Describe your approach to solving the problem. -->
1. Initialize a map (1~50, false)

2. Iterate through A and B and set value to true for its first occurrence, and add 1 to count for its second occurrence.

# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
1. **Initialization of Dictionary:**
   - The loop to initialize the dictionary `m` runs in constant time because it has a fixed number of iterations (50).
   - The time complexity of this part is O(1).

2. **Main Loop:**
   - The main loop iterates through the lists `A` and `B`, and for each element, it checks and updates the dictionary `m`.
   - The dictionary `m` has a fixed number of elements (50), and the checks and updates are constant time operations.
   - The loop iterates through each element of `A` and `B`, so the time complexity of this part is O(len(A) + len(B)).

3. **Overall Time Complexity:**
   - The overall time complexity is dominated by the main loop, so the final time complexity is O(len(A) + len(B)).

In summary, the time complexity of the code is linear with respect to the combined lengths of lists `A` and `B`.

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
1. **Dictionary `m`:**
   - The dictionary `m` is created with 50 key-value pairs, and each key corresponds to an integer from 1 to 50. Therefore, the space complexity of `m` is O(1).

2. **Output List:**
   - The output list `output` is created, and its size is determined by the length of lists `A` and `B`. In the worst case, it could be as large as len(A) + len(B).
   - The space complexity of `output` is O(len(A) + len(B)).

3. **Other Variables:**
   - The variables `count` and the loop index variables have constant space requirements and don't depend on the input size.

4. **Overall Space Complexity:**
   - The overall space complexity is determined by the size of the dictionary `m` and the output list `output`.
   - The dominant factor is the size of the output list, so the overall space complexity is O(len(A) + len(B)).

In summary, the space complexity of the code is linear with respect to the combined lengths of lists `A` and `B`.

# Code

```Python []
class Solution:
    def findThePrefixCommonArray(self, A: List[int], B: List[int]) -> List[int]:
        m = {}
        output = []
        count = 0
        for i in range(1, 51):
            m[i] = False
        for i in range(len(A)):
            if m[A[i]] == False:
                m[A[i]] = True
            else:
                count += 1
            if m[B[i]] == False:
                m[B[i]] = True
            else:
                count += 1
            output.append(count)
        return output

```
