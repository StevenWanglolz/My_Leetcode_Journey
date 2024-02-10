## [Origina Post](https://leetcode.com/problems/number-of-laser-beams-in-a-bank/solutions/4495066/sum-of-devices-prev-count-1/)

# Code

```C++ []
class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans=0, prev=0;
        for(auto& row: bank){
            int device=count(row.begin(), row.end(), '1');
            if (device>0){
                ans+=device*prev;
                prev=device;
            }
        }
        return ans;
    }
};
```
