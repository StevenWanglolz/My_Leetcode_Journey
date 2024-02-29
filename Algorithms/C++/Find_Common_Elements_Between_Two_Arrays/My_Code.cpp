class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> output;
        map<int, bool> m1;
        map<int, bool> m2;
        int count = 0;
        for(int i = 0; i <= 100; i++){
            m1[i] = false;
            m2[i] = false;
        }
        for(auto it : nums1){
            m1[it] = true;
        }
        for(auto it : nums2){
            m2[it] = true;
        }
        for(int i = 0; i < n; i++){
            if(m2[nums1[i]] == true){
                count++;
            }
        }
        output.push_back(count);
        count = 0;
        for(int i = 0; i < m; i++){
            if(m1[nums2[i]] == true){
                count++;
            }
        }
        output.push_back(count);
        return output;
    }
};