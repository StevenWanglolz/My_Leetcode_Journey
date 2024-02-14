# Approach

- if ```A ^ B = C```, then ```A = C ^ B```.

# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The time complexity of the code is \(O(N)\), where \(N\) is the size of the input vector `pref`.

Let's break down the analysis:

1. The `findArray` method iterates through each element of the `pref` vector in a loop (from index 1 to `pref.size() - 1`).
2. For each iteration, it calls the `get_num` method, which involves a constant number of operations (mainly the XOR operation).
3. Each iteration of the loop takes constant time, and the overall time complexity is proportional to the number of iterations, which is \(N - 1\) (where \(N\) is the size of the input vector).

Therefore, the time complexity of the `findArray` method is \(O(N)\), making it a linear time algorithm with respect to the size of the input vector.

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity of the code is \(O(N)\), where \(N\) is the size of the input vector `pref`.

Here's the breakdown:

1. The `v` vector is created to store the results, and its size is directly proportional to the size of the input vector `pref`. Therefore, the space complexity contribution from `v` is \(O(N)\).

2. The `n` variable used within the loop does not contribute significantly to space complexity. It remains a constant-size integer variable.

3. Other variables and data structures in the code are of constant size and do not depend on the input size.

In summary, the dominant factor affecting space complexity is the `v` vector, and the overall space complexity is \(O(N)\).

# Code

```Python []
[class Solution:
    def get_num(self, result: int, num1: int) -> int:
        num2 = result ^ num1
        return num2

    def findArray(self, pref: List\[int\]) -> List\[int\]:
        output = \[\]
        output.append(pref\[0\])
        for i in range(1, len(pref)):
            num = self.get_num(pref\[i\], pref\[i-1\])
            output.append(num)    
        return output](My_Code.cpp)
```
