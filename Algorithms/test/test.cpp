#include <string>
#include <vector>
class Solution
{
public:
    int balancedStringSplit(string s)
    {
        int r = 0;
        int l = 0;
        string str = "";
        vector<string> v;
        for (auto it = s.begin(); it != s.end(); ++it)
        {
            if (*it == 'R')
            {
                str += "R";
                r += 1;
            }
            else
            {
                str += "L";
                l += 1;
            }
            if (r == l)
            {
                v.push_back(str);
                r = 0;
                l = 0;
                str = "";
            }
        }
        return v.size();
    }
};