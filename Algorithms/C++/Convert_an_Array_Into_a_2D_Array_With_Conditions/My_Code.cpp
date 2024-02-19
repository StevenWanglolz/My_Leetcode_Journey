#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<int> freq(201, 0);
        vector<vector<int>> o;
        for(auto it : nums){
            if(freq[it] == o.size()){
                o.push_back(vector<int>{it});
            }
            else{
                o[freq[it]].push_back(it);
            }
            freq[it]++;
        }
        return o;
    }
};