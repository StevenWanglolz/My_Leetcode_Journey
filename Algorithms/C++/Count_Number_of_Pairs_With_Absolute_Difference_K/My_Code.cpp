class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count = 0;
        map<int, int> m;
        vector<int> v;
        for(auto it: nums){
            if (m.find(it) != m.end()) {
                m[it] += 1;
            } else {
                m[it] = 1;
            }

            if(m.find(it+k) != m.end()){
                count += m[it+k];
            }
            if(m.find(it-k) != m.end()){
                count += m[it-k];
            }
        }
        return count;
    }
};