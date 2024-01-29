[Source](https://leetcode.com/problems/cells-in-a-range-on-an-excel-sheet/solutions/3394861/c-and-c-very-easy-solution/)

 - ```res.push_back``` creates a string by concatenating the list {c, r} and then appends it to ```res```.

```C++ []
class Solution {
public:
    vector<string> cellsInRange(string s) {
    vector<string> res;
    for (char c = s[0]; c <= s[3]; ++c)
        for (char r = s[1]; r <= s[4]; ++r)
            res.push_back({c, r});
    return res;
    }     
};
```