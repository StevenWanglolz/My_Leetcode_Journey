class Solution
{
public:
    vector<bool> checkArithmeticSubarrays(vector<int> &nums, vector<int> &l, vector<int> &r)
    {
        vector<bool> o;
        for (int j = 0; j < r.size(); j++)
        {
            bool b = true;
            vector<int> v;
            for (int i = l[j]; i <= r[j]; i++)
            {
                v.push_back(nums[i]);
            }
            sort(v.begin(), v.end());
            int rule = v[1] - v[0];
            for (int i = 2; i < v.size(); i++)
            {
                if (v[i] - v[i - 1] != rule)
                {
                    b = false;
                    break; // No need to continue checking if the rule is already violated
                }
            }
            o.push_back(b);
        }
        return o;
    }
};
