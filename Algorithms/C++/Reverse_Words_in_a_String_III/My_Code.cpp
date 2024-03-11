#include <stack>
class Solution {
public:
    string reverseWords(string s) {
        string output = "";
        stack<char> my_stack;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == ' '){
                for(int i = my_stack.size(); i > 0; i--){
                    output += my_stack.top();
                    my_stack.pop();
                }
                output += ' ';
            }
            else if(i != s.length()-1){
                my_stack.push(s[i]);
            }
            else{
                my_stack.push(s[i]);
                for(int i = my_stack.size(); i > 0; i--){
                    output += my_stack.top();
                    my_stack.pop();
                }
            }
        }
        return output;
    }
};