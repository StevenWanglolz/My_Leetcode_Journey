class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int o = 0;
        for(auto it : hours){
            if(it >= target){
                o++;
            }
        }
        return o;
    }
};