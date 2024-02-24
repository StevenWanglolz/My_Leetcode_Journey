#include <map>
class Solution {
public:
    bool checkIfPangram(string sentence) {
        map<char, bool> m;
        for(int i = 97; i <= 122; i++){
            m[char(i)] = false;
        }
        for(auto n : sentence){
            m[n] = true;
        }
        for(auto it : m){
            if(it.second == false){
                return false;
            }
        }
        return true;
    }
};