sclass Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> m;
        vector<vector<string>> v;
        for(string s: strs){
            string w = s;
            sort(w.begin(), w.end());
            m[w].push_back(s);
        }
        for(auto it: m){
            vector<string> vs;
            for(auto v: it.second){
                vs.push_back(v);
            }
            v.push_back(vs);
        }
        return v;
    }
};