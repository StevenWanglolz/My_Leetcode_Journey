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