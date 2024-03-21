class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> even;
        vector<int> odd;
        for(auto n: nums){
            if(n % 2 == 0){
                even.push_back(n);
            }
            else{
                odd.push_back(n);
            }
        }
        for(auto n: odd){
            even.push_back(n);
        }
        return even;
    }
};