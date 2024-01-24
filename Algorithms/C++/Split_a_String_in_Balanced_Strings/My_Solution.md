# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Compare the amount of "R"s and "L"s.
# Approach
<!-- Describe your approach to solving the problem. -->
1. Declare ```r, l``` to keep track of the amount of "R"s and "L"s. Declare an empty string to store the string that will be pushed into the vector. Declare a vector of strings to store the output.
# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The time complexity of the code is O(N), where N is the length of the input string `s`. The code iterates through each character in the string once and performs constant-time operations within the loop.

Let's break down the main operations in the code:

1. **Iteration through the input string:**
   - The `for` loop iterates through each character in the string once.

2. **Appending strings to the vector:**
   - The `v.push_back(str)` operation appends the current string to the vector. This operation takes constant time.

3. **Resetting variables:**
   - The variables `r`, `l`, and `str` are reset after each balanced substring is found.

Since each character in the input string is processed once, and the operations inside the loop are constant time, the overall time complexity is O(N), where N is the length of the input string.
- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity of the code is O(N), where N is the length of the input string `s`. The main contributor to the space complexity is the vector `v`, which stores the balanced substrings found during the iteration.

Let's break down the main components contributing to the space complexity:

1. **Vector `v`:**
   - The vector `v` stores the balanced substrings found during the iteration. In the worst case, each character in the input string may contribute to a new substring in the vector. Therefore, the length of `v` can be at most N (the length of the input string).

2. **String `str`:**
   - The string `str` is used to build each balanced substring. In the worst case, its length may be proportional to the length of the input string. However, since it is reset after each balanced substring is found, the maximum length of `str` at any point is bounded by N.

3. **Variables `r` and `l`:**
   - The variables `r` and `l` are used to count the number of "R" and "L" characters in each substring. They contribute only constant space.

4. **Other constants:**
   - Other variables (`it`, loop indices, etc.) contribute constant space.

In summary, the primary space-consuming component is the vector `v`, and the overall space complexity is O(N). The space complexity grows linearly with the length of the input string.
# Code
```
#include <string>
#include <vector>
class Solution {
public:
    int balancedStringSplit(string s) {
        int r = 0;
        int l = 0;
        string str = "";
        vector<string> v;
        for(auto it = s.begin(); it != s.end(); ++it){
            if(*it == 'R'){
                str += "R";
                r += 1;
            }
            else{
                str += "L";
                l += 1;
            }
            if(r == l){
            v.push_back(str);
            r = 0;
            l = 0;
            str = "";
            }
        }
        return v.size();
    }
};
```