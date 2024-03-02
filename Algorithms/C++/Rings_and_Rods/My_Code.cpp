#include <map>
class Solution {
public:
    int countPoints(string rings) {
        int count = 0;
        map<int, string> m;
        for(int i = 0; i < 10; i++){
            m[i] = "";
        }
        for(int i = 0; i < rings.size(); i++){
            if(i % 2 == 0){
                m[(int)rings[i+1]] += rings[i];
            }
        }
        for(auto it : m){
            if(it.second.find("R")!=string::npos && \
            it.second.find("G")!=string::npos && \
            it.second.find("B")!=string::npos){
                count++;
            }
        }
        return count;
    }
};