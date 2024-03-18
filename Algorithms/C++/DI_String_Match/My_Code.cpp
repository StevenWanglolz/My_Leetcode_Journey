class Solution {
public:
    vector<int> diStringMatch(string s) {
        int i = 0;
        int d = s.length();
        vector<int> v;
        for(auto it: s){
            if(it == 'D'){
                v.push_back(d);
                d--;
            }
            else{
                v.push_back(i);
                i++;
            }
        }
        if(s[s.length()-1] == 'I'){
            v.push_back(d);
        }
        else{
            v.push_back(i);
        }
        return v;
    }
};