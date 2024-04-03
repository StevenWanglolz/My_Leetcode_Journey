class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        map<int, int> m;
        map<int, int> mr;
        m[0] = nums[0];
        mr[nums.size()-1]  = nums[nums.size()-1];
        for(int i = 1; i < nums.size(); i++){
            m[i] = m[i-1] * nums[i];
        }
        for(int i = nums.size()-2; i >= 0; i--){
            mr[i] = mr[i+1] * nums[i];
        }
        vector<int> output;
        for(int i = 0; i < nums.size(); i++){
            if(i == 0){
                output.push_back(mr[i+1]);
            }
            else if(i == nums.size()-1){
                output.push_back(m[nums.size()-2]);
            }
            else{
                output.push_back(m[i-1]*mr[i+1]);
            }
        }
        return output;
    }
};