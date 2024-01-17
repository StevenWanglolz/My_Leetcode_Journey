class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int count = 0;
        for (auto it = operations.begin(); it != operations.end(); ++it) {
            if (*it == "X++" || *it == "++X") {
                count++;
            } else if (*it == "X--" || *it == "--X") {
                count--;
            }
        }
        return count;
    }
};
