class Solution {
public:
    int minPartitions(string n) {
        int num = 0;
        for(auto c : n){
            int i = (c - '0');
            if(i >num){
                num = i;
            }
        }
        return num;
    }
};