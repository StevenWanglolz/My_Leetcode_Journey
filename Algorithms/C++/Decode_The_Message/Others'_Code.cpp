class Solution
{
public:
    string decodeMessage(string key, string message)
    {
        unordered_map<char, char> m;
        char y = 'a';
        for (char x : key)
        {
            if (x != ' ' && m.find(x) == m.end())
                m.insert({x, y++});
        }
        // for(auto w:m){
        //     cout<<w.first<<" "<<w.second<<endl;
        // }
        string ans = "";
        for (char x : message)
        {
            if (x != ' ')
                ans += m[x];
            else
                ans += ' ';
        }
        return ans;
    }
};