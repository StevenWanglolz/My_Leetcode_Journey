class Solution {
public:
    int get_num(int result, int num1){
        int num2 = result ^ num1;
        return num2;
    }
    
    vector<int> findArray(vector<int>& pref) {
        vector<int> v;
        int n = 0;
        v.push_back(pref[0]);
        for(int i = 1; i < pref.size(); i++){
            n = get_num(pref[i], pref[i-1]);
            v.push_back(n);
        }
        return v;
    }
};