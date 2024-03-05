# Approach
<!-- Describe your approach to solving the problem. -->
1. Declare a fuction to retrieve the base converted number (returns string).

2. Keep a pointer ```mid``` which points at the middle of the string.

3. Compare the two strings with the help of ```mid```.

# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
1. **`base_convert` function:**
   - The while loop runs until the `num` becomes zero.
   - In each iteration, a constant amount of work is done (modulo operation, string concatenation, and division).
   - The number of iterations in the worst case is logarithmic in `num` with base `b`.
   - Therefore, the time complexity of `base_convert` is O(log(num)).

2. **`isStrictlyPalindromic` function:**
   - The outer loop runs for each base `i` from 2 to `n-2`, so it has O(n) iterations.
   - Inside the loop, the `base_convert` function is called, which has a time complexity of O(log(num)).
   - The slicing and comparison operations are performed on the string, which takes O(len(s)) time.
   - Overall, the dominant factor is the `base_convert` function, so the time complexity of the `isStrictlyPalindromic` function is O(n * log(n)).

Therefore, the overall time complexity of the provided code is O(n * log(n)).

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
1. **`base_convert` function:**
   - The space used in this function is mainly for the string `s`.
   - The length of `s` is logarithmic in the value of `num` with base `b`.
   - Therefore, the space complexity of `base_convert` is O(log(num)).

2. **`isStrictlyPalindromic` function:**
   - The primary space usage in this function is for the string `s`.
   - The length of `s` is also logarithmic in the value of `n` with different bases `i`.
   - The additional space used for other variables (e.g., `mid`, `s1`, `s2`) is constant and does not depend on the input size.
   - Therefore, the space complexity of `isStrictlyPalindromic` is O(log(n)).

Overall, the space complexity of the provided code is dominated by the space used in the `base_convert` function, so the overall space complexity is O(log(max(num, n))) or O(log(n)) in terms of the input size.

# Code

```
class Solution:
    def base_convert(self, num: int, b: int) -> str:
        s = ""
        while num:
            n = num % b
            s += str(n)
            num = num // b
        print(s[::-1])
        return s[::-1]

    def isStrictlyPalindromic(self, n: int) -> bool:
        for i in range(2, n-1):
            s = self.base_convert(n, i)
            if len(s) % 2 == 0:
                mid = len(s) // 2 - 1
            else:
                mid = len(s) // 2
            s1 = s[:mid+1]
            s2 = s[mid+1:]
            s2 = s2[::-1]
            if s1 != s2:
                return False
        return True

```
