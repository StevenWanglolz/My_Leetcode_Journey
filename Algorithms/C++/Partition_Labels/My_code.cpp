#include <map>
#include <vector>
class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char, int> m;
        for(int i = 0; i < s.length(); i++){
            m[s[i]] = i;
        }
        int size = 0;
        int mx = 0;
        vector<int> v;
        for(int i = 0; i < s.length(); i++){
            size++;
            mx = max(m[s[i]], mx);
            if(i == mx){
                v.push_back(size);
                size = 0;
            }
        }
        return v;
    }
};