class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        int index = 0;
        int count = 0;
        vector<int> v;
        vector<int> output;
        for(char c : boxes){ // * Map all indices
            if(c=='1'){
                v.push_back(index);
            }
            index++;
        }
        for(int i=0 ; i<n ; i++){
            count = 0;
            for(int num : v){
                count+=abs(num-i);
            }
            output.push_back(count);
        }
        return output;
    }
};