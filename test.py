class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> v;
        count = 0;

        for(auto it = words.begin(); it != words.end; ++it){
            if(*it.contains(x)){
                v[count] = it;
                count++;
            }
        }
    }
};