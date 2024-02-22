class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int count = 0;
        for(int i = 0; i < nums.size()-2; i++){
            bool b = false;
            for(int j = i; j < nums.size(); j++){
                if(nums[j] == nums[i] + diff){
                    for(int k = j; k < nums.size(); k++){
                        if(nums[k] == nums[i] + diff + diff){
                            b = true;
                        }
                    }
                }
            }
            if(b == true){
                count++;
            }
        }
        return count;
    }
};