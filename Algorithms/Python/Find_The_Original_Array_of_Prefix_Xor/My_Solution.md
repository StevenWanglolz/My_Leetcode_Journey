# Approach

- if ```A ^ B = C```, then ```A = C ^ B```.

# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The time complexity of the code is \(O(N)\), where \(N\) is the length of the input array `pref`.

Let's analyze the code step by step:

1. The `findArray` method iterates through each element of the `pref` array in a loop (from index 1 to `len(pref) - 1`).
2. For each iteration, it calls the `get_num` method, which involves a constant number of operations (mainly the XOR operation).
3. Each iteration of the loop takes constant time, and the overall time complexity is proportional to the number of iterations, which is \(N - 1\) (where \(N\) is the length of the input array).

Therefore, the time complexity of the `findArray` method is \(O(N)\), making it a linear time algorithm with respect to the size of the input array.

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity of the provided code is \(O(N)\), where \(N\) is the length of the input array `pref`.

Here's the breakdown:

1. The `output` list is created to store the results, and its size is directly proportional to the length of the input array `pref`. Therefore, the space complexity contribution from `output` is \(O(N)\).

2. The `num2` variable is used within the `get_num` method, but it doesn't contribute to the overall space complexity in a way that scales with the input size. It remains a constant size regardless of the input size.

3. Other variables and data structures in the code are also of constant size, and they do not depend on the input size.

In summary, the dominant factor affecting space complexity is the `output` list, and the overall space complexity is \(O(N)\).

# Code

```Python []
class Solution:
    def get_num(self, result: int, num1: int) -> int:
        num2 = result ^ num1
        return num2

    def findArray(self, pref: List[int]) -> List[int]:
        output = []
        output.append(pref[0])
        for i in range(1, len(pref)):
            num = self.get_num(pref[i], pref[i-1])
            output.append(num)    
        return output
```
