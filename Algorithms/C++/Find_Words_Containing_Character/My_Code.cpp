#include<string>

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> v;
        int index = 0;
        for(auto it = words.begin(); it != words.end(); ++it){
            if(it->find(x) != string::npos){
                v.push_back(index);
            }
            index++;
        }
        return v;
    }
};