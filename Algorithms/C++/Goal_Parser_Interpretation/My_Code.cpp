class Solution {
public:
    string interpret(string command) {
        string o = "";
        for(int i = 0; i < command.size(); i++){
            if(command[i] == 'G'){
                o += "G";
            }
            else if(command[i] == '('){
                if(command[i+1] == ')'){
                    o += "o";
                }
                else{
                    o += "al";
                }
            }
        }
        return o;
    }
};