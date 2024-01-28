class Solution {
public:
    string truncateSentence(string s, int k) {
        int count = 0;
        string output = "";
        for(auto it = s.begin(); it != s.end(); ++it){
            if(* it == ' '){
                count++;
            }
            if(count == k){
                break;
            }
            output += *it;
        }
        return output;
    }
};