#include <string>

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max = 0;
        int count;
        for(auto it = sentences.begin(); it != sentences.end(); ++it){
            count = 1;
            for(auto s : *it){
                //cout << s << endl;
                if(s == ' '){
                    count++;
                }
            }
            if(count > max){
                max = count;
            }
        } 
        return max;
    }
};