class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        map<char,bool> m;
        // map<char,int> n;

        for(auto x:jewels){
            m[x]=true;
        }
        int count=0;
        for(auto x:stones){
            if(m[x]){
                count++;
            }
        }
        
        return count;
    }
};