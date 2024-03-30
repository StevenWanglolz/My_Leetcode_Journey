#include <map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        map<int, vector<int>> m;
        for(int i = 0; i < nums.size(); i++){
            if(m[nums[i]].empty()){
                m[nums[i]] = {i};
            }
            else{
                m[nums[i]].push_back(i);
            }
        }
        for(int i = 0; i < nums.size(); i++){
            int diff = target - nums[i];
            if(!m[diff].empty()){
                if(m[nums[i]] != m[diff]){ // Diff nums
                    v.push_back(i);
                    v.push_back(m[diff][0]);
                    break;
                }
                else if(m[nums[i]]== m[diff] && m[nums[i]].size()>1){
                    v.push_back(m[nums[i]][0]);
                    v.push_back(m[nums[i]][1]);
                    break;
                }
                
            }
        }
        return v;            
    }
};