# Complexity

- Time complexity:
O(n)
- Space complexity:
O(n)

# Code

```C++ []
class Solution {
public:
    bool findTarget(set<int>& numsSet, int target){
        return numsSet.find(target) != numsSet.end();
    }
    int longestConsecutive(vector<int>& nums) {
        int length = 1;
        vector<int> ml;
        int maxi = 0;
        set<int> numsSet(nums.begin(), nums.end());
        for(auto it: numsSet){
            if(!findTarget(numsSet, it-1)){
                while(findTarget(numsSet, it+1)){
                    length++;
                    it++;
                }
                if(length > maxi){
                    maxi = length;
                };
                length = 1;
            }
        }
        if(numsSet.size() == 0){
            return 0;
        }
        else{
            return maxi;
        }
    }
};
```
