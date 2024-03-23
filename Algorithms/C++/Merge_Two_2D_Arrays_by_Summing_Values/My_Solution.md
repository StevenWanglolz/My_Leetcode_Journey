# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Two pointers

# Approach
<!-- Describe your approach to solving the problem. -->
1. Keep two pointers for ```nums1``` and ```nums2```.

2. The first while loop goes through either vector.

3. Add two additional while loops in case one of the vectors isn't fully checked.

# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
O(n)

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
O(n)

# Code

```
#include <map>
class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> v;
        int l = 0;
        int r = 0;
        while(l < nums1.size() && r < nums2.size()){
            if(nums1[l][0] == nums2[r][0]){
                v.push_back({nums1[l][0], nums1[l][1]+nums2[r][1]});
                l++;
                r++;
            }
            else if(nums1[l][0] < nums2[r][0]){
                v.push_back({nums1[l][0], nums1[l][1]});
                l++;
            }
            else{
                v.push_back({nums2[r][0], nums2[r][1]});
                r++;
            }
        }
        while(l < nums1.size()){
            v.push_back({nums1[l][0], nums1[l][1]});
            l++;
        }
        while(r < nums2.size()){
            v.push_back({nums2[r][0], nums2[r][1]});
            r++;
        }
        return v;
    }
};
```
