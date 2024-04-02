class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> output;
        map<int, int> m;
        int num;
        for(auto n: nums){
            m[n] += 1;
        }
        for(int i = 0 ; i < k ; i++){
            int n = 0;
            for(auto it: m){
                if(it.second > n){
                    n = it.second;
                    num = it.first;
                }
            }
            m[num] = 0;
            output.push_back(num);
        }
        return output;
    }
};