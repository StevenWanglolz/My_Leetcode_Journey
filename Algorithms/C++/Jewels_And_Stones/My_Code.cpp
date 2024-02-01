class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        bool flag = false;
        for(auto s : stones){
            for (auto j : jewels){
                if(s == j){
                    flag = true;
                }
            }
            if(flag == true){
                count++;
            }
            flag = false;
        }
        return count;
    }
};