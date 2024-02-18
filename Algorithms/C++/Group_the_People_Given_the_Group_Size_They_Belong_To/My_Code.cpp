class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        map<int, bool> m;
        for(int i = 0; i < 500; i++){ // * Initialize map
            m[i] = false;
        }
        for(int i = 0; i < groupSizes.size(); i++){
            if(m[groupSizes[i]] == false){ 
                m[groupSizes[i]] = true;
            }
        }
        vector<int> v2; // * All numbers in the list
        for(auto it : m){
            if(it.second == true){
                v2.push_back(it.first);
            }
        }
        int count = 0;
        vector<int> v; // * Vector within o
        vector<vector<int>> o; // * Output vector
        for(auto it : v2){
            for(int i = 0; i < groupSizes.size(); i++){
                if(groupSizes[i] == it){
                    v.push_back(i);
                    count ++;
                    if(count == it){
                        o.push_back(v);
                        count = 0;
                        v.clear();
                    }
                }
            }
        }
        return o;
    }
};