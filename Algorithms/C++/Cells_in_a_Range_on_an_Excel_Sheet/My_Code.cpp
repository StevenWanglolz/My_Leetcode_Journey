#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> output;
        string str = "";
        for(int i = 0; i < ((int)s[3]-(int)s[0]+1); i++){
            for(int j = 0; j < ((int)s[4]-(int)s[1]+1); j++){
                str += char(i + (int)s[0]);
                str += char(j + (int) s[1]);
                output.push_back(str);
                str = "";
            }
        }
        return output;
    }
};