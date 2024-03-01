#include <map>
class Solution {
public:
    int minSteps(string s, string t) {
        int output = 0;
        map<char, int> m1;
        map<char, int> m2;
        for(int i = 96; i <= 122; i++){
            m1[char(i)] = 0;
            m2[char(i)] = 0;
        }
        for(auto it : s){
            m1[it] += 1;
        }
        for(auto it : t){
            m2[it] += 1;
        }
        for(auto it : m1){
            if(it.second > m2[it.first]){
                output += it.second - m2[it.first];
            }
        }
        return output;
    }
};