#include <map>
class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int count = 0;
        vector<int> output;
        map<int, bool> m;
        for(int i = 1; i <= 50; i++){
            m[i] = false;
        }
        for(int i = 0; i < A.size(); i++){
            if(m[A[i]] == false){
                m[A[i]] = true;
            }
            else{
                count++;
            }
            if(m[B[i]] == false){
                m[B[i]] = true;
            }
            else{
                count++;
            }
            output.push_back(count);
        }
        return output;
    }
};