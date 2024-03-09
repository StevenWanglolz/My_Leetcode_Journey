#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (auto w : words) {
            if (w.size() % 2 == 1) {
                string s1 = "";
                string s2 = "";
                int mid = w.size() / 2;
                for (int i = 0; i < mid; i++) {
                    s1 += w[i];
                }
                for (int i = w.size() - 1; i > mid; i--) {
                    s2 += w[i];
                }
                if (s1 == s2) {
                    return w;
                }
            } else if (w.size() % 2 == 0) {
                string s1 = "";
                string s2 = "";
                int mid = w.size() / 2;
                for (int i = 0; i < mid; i++) {
                    s1 += w[i];
                }
                for (int i = w.size() - 1; i >= mid; i--) {
                    s2 += w[i];
                }
                if (s1 == s2) {
                    return w;
                }
            }
        }
        return "";
    }
};
