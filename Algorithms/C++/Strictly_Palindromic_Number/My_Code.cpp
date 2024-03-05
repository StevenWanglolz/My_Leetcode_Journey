#include <string>
class Solution {
public:
    string base_convert(int num, int b){
        string s = "";
        while(num){
            int n = num % b;
            num = num / b;
            s += char(n);
        }
        string reverse = "";
        for(int i = s.length(); i >= 0; i--){
            reverse += s[i];
        }
        return reverse;
    }

    bool isStrictlyPalindromic(int n) {
        for(int i = 2; i < n-1; i++){
            string s = base_convert(n, i);
            int mid = 0;
            string s1 = "";
            string s2 = "";
            if(s.length()%2 == 0){
                int mid = s.length()/2-1;
            }
            else{
                int mid = s.length()/2;
            }
            for(int i = 0; i <= mid; i++){
                s1 += s[i];
            }
            for(int i = mid; i <= s.length(); i++){
                s2 += s[i];
            }
            if(s1 != s2){
                return false;
            }
        }
        return true;
    }
};