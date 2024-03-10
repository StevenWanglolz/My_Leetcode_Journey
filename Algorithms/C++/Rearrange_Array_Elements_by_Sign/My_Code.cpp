class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pv;
        vector<int> nv;
        vector<int> output;
        int pc = 0;
        int nc = 0;
        for(auto n : nums){
            if(n > 0){
                pv.push_back(n);
            }
            else{
                nv.push_back(n);
            }
        }
        for(auto it: nums){
            if(pc < pv.size()){
                output.push_back(pv[pc]);
                pc++;
            }
            if(nc < nv.size()){
                output.push_back(nv[nc]);
                nc++;
            }
        }
        return output;
    }
};