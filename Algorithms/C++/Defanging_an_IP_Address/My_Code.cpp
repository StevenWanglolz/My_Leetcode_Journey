#include <string>

class Solution {
public:
    string defangIPaddr(string address) {
        string output = "";
        for(char c : address){
            if(c == '.'){
                output += "[.]";
            }
            else{
                output += c;
            }
        }
        return output;  // Don't forget to return the result
    }
};
