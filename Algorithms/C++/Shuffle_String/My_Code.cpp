class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string output = "";
        vector<string> v(indices.size(), "");
        for(int i = 0; i < indices.size(); i++){
            v[indices[i]] = s[i];
        }
        for(auto it = v.begin(); it != v.end(); ++it){
            output += * it;
        }
        return output;
    }
};