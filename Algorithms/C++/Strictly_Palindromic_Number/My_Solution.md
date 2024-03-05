# Approach
<!-- Describe your approach to solving the problem. -->
1. Declare a fuction to retrieve the base converted number (returns string).

2. Keep a pointer ```mid``` which points at the middle of the string.

3. Compare the two strings with the help of ```mid```.

# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
1. **`base_convert` function:**
   - The while loop runs until `num` becomes zero.
   - In each iteration, a constant amount of work is done (modulo operation, division, and character appending).
   - The loop runs O(log(num)) times.
   - The subsequent loop for reversing the string runs in O(log(num)) as well.
   - Therefore, the time complexity of `base_convert` is O(log(num)).

2. **`isStrictlyPalindromic` function:**
   - The outer loop runs for each base `i` from 2 to `n-2`, so it has O(n) iterations.
   - Inside the loop, the `base_convert` function is called, which has a time complexity of O(log(num)).
   - The slicing and comparison operations are performed on the string, which takes O(len(s)) time.
   - Overall, the dominant factor is the `base_convert` function, so the time complexity of `isStrictlyPalindromic` is O(n * log(n)).

Therefore, the overall time complexity of the provided code is O(n * log(n)).

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
1. **`base_convert` function:**
   - The primary space used in this function is for the string `s`.
   - The length of `s` is logarithmic in the value of `num` with base `b`.
   - The space complexity of `base_convert` is O(log(num)).

2. **`isStrictlyPalindromic` function:**
   - The primary space used in this function is for the string `s` returned by `base_convert`.
   - The additional space used for other variables (e.g., `mid`, `s1`, `s2`) is constant and does not depend on the input size.
   - Therefore, the space complexity of `isStrictlyPalindromic` is O(log(n)).

Overall, the space complexity of the provided code is dominated by the space used in the `base_convert` function, so the overall space complexity is O(log(max(num, n))) or O(log(n)) in terms of the input size.

# Code

```C++ []
#include <string>
class Solution {
public:
    string base_convert(int num, int b){
        string s = "";
        while(num){
            int n = num % b;
            num = num / b;
            s += char(n);
        }
        string reverse = "";
        for(int i = s.length(); i >= 0; i--){
            reverse += s[i];
        }
        return reverse;
    }

    bool isStrictlyPalindromic(int n) {
        for(int i = 2; i < n-1; i++){
            string s = base_convert(n, i);
            int mid = 0;
            string s1 = "";
            string s2 = "";
            if(s.length()%2 == 0){
                int mid = s.length()/2-1;
            }
            else{
                int mid = s.length()/2;
            }
            for(int i = 0; i <= mid; i++){
                s1 += s[i];
            }
            for(int i = mid; i <= s.length(); i++){
                s2 += s[i];
            }
            if(s1 != s2){
                return false;
            }
        }
        return true;
    }
};
```
