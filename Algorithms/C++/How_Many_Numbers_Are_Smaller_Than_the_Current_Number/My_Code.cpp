    class Solution {
    public:
        vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
            int c = 0;
            vector<int> o;
            for(auto x: nums){
                c = 0;
                for(auto y: nums){
                    if(x > y){
                        c++;
                    }
                }
                o.push_back(c);
            }
            return o;
        }
    };