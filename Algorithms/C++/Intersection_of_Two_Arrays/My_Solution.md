# Approach

1. Keep a map   ```m1``` to store nums1.

2. keep a map ```m2``` to store nums2.

3. Finally, iterate through nums2.

# Complexity

- Time complexity:
O(n)
- Space complexity:
O(1)

# Code

```C++ []
#include <map>
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int, bool> m;
        map<int, bool> m2;
        vector<int> v;
        for(int i = 0; i < 1001; i++){
            m[i] = false;
            m2[i] = false;
        }
        for(auto n: nums1){
            m[n] = true;
        }
        for(auto n: nums2){
            if(m[n] == true && m2[n] == false){
                v.push_back(n);
                m2[n] = true;
            }
        }
        return v;
    }
};
```
