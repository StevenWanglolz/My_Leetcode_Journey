### [Source](https://leetcode.com/problems/decode-the-message/solutions/3517149/simplest-code-to-understand-it-beginner-friendly/)
# Approach
1. Make a map of key with alphabets using map data structure , we can use unordered or map any data structure.  
   
2. And now simplly traverse the message and decode it using mapping
# Complexity
- Time complexity  
  
  O(N) --> for traversing the message the decode it
- Space complexity  
O(1) --> only the space required for mapping the alphabets with key
# Code
```C++ []
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
```