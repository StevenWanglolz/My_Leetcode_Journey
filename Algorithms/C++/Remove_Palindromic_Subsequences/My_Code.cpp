class Solution {
public:
    int removePalindromeSub(string s) {
        string s2 = "";
        for(int i = s.length()-1; i >= 0; i--){
            s2 += s[i];
        }
        if(s == s2){
            return 1;
        }
        else{
            return 2;
        }
    }
};