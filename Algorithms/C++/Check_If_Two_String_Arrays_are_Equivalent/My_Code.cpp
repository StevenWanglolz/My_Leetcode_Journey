class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1 = "";        
        string s2 = "";        
        for(string s: word1){
            for(char c: s){
                s1 += c;
            }
        }

        for(string s: word2){
            for(char c: s){
                s2 += c;
            }
        }
        
        if(s1.size() != s2.size()){
            return false;
        }
        else{
            for(int i = 0; i < s1.size(); i++){
                if(s1[i] != s2[i]){
                    return false;
                }
            }
            return true;
        }
    }
};