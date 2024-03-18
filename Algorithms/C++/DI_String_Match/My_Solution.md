# Approach

1. Keep a pointer at the start and keep a pointer at the end.

2. After iterating through ```s```, add the last element depending on whether it is a 'D' or an 'I'.

# Complexity

- Time complexity:
O(n)

- Space complexity:
O(n)

# Code

```C++ []
class Solution {
public:
    vector<int> diStringMatch(string s) {
        int i = 0;
        int d = s.length();
        vector<int> v;
        for(auto it: s){
            if(it == 'D'){
                v.push_back(d);
                d--;
            }
            else{
                v.push_back(i);
                i++;
            }
        }
        if(s[s.length()-1] == 'I'){
            v.push_back(d);
        }
        else{
            v.push_back(i);
        }
        return v;
    }
};
```
