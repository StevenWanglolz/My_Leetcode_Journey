class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count = 0;
        int ruleIndex = (ruleKey == "type") ? 0 : (ruleKey == "color") ? 1 : 2;

        for(int i = 0; i < items.size(); i++){
            if(items[i][ruleIndex] == ruleValue){
                count++;
            }
        }

        return count;
    }
};