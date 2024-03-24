class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> v;
        for(auto n : nums){
            v.push_back(n*n);
        }
        sort(v.begin(), v.end());
        return v;
    }
};