#include <map>
class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> ms;
        map<char, int> mt;
        for(auto n: s){
            ms[n] += 1;
        }
        for(auto n: t){
            mt[n] += 1;
        }
        if(ms == mt){
            return true;
        }
        else{
            return false;
        }
    }
};