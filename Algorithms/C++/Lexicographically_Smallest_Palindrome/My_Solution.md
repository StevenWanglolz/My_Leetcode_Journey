# Approach

Compare the indices one by one.

One pointer starts from the beginning and one starts from the end.

# Complexity

- Time complexity:
O(n)

- Space complexity:
O(1)

# Code

```C++ []
class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int i = 0;
        int j = s.size()-1;
        while(i < j){
            if(s[i] != s[j] && s[i] > s[j]){
                s[i] = s[j];
            }
            else if(s[i] != s[j] && s[j] > s[i]){
                s[j] = s[i];
            }
            i++;
            j--;
        }
        return s;
    }
};
```
