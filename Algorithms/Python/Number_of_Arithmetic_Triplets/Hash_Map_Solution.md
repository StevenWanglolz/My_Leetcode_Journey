# [Solution](https://leetcode.com/problems/number-of-arithmetic-triplets/solutions/4654949/beats-100-of-users-step-by-step-explain-using-hashmap-easy-to-understand/)

# Code

```Python []
class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) 
    {
        map<int,int>mp;
        int count = 0 ;
        for( int i = 0 ; i < nums.size() ; i++ )
            mp[ nums[i] ]++;
        for( int i = 0 ; i < nums.size() ; i++ )
        {
            if ( mp[nums[i]+diff] && mp[nums[i]+diff+diff] )
                count++;
        }
        return count ;
    }
};
```
