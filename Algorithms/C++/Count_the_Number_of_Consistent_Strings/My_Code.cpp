#include <map>

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        map<char, bool> m;
        int count = 0;
        for(auto it : allowed){
            m[it] = true;
        }
        for(auto w : words){
            bool b = true;
            for(auto c : w){
                if(m[c] == false){
                    b = false;
                    break;
                }
            }
            if(b == true){
                count++;
            }
        }
        return count;
    }
};