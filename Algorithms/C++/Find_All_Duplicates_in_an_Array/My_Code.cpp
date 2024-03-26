#include <map>
#include <vector>

class Solution {  
public:
    vector<int> findDuplicates(std::vector<int>& nums) {
        map<int, int> m;
        vector<int> output;
        for(auto n: nums){
            m[n] += 1;
        }
        for(auto p: m){
            if(p.second >= 2){
                output.push_back(p.first);
            }
        }
        return output;
    }
};  