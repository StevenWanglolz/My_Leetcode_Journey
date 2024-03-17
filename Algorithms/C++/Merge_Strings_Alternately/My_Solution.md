# Approach

Divide into three situations.

# Complexity

- Time complexity:
O(n)

- Space complexity:
O(n)

# Code

```C++ []
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s = "";
        if(word1.length() > word2.length()){
            for(int i = 0; i < word2.length(); i++){
                s += word1[i];
                s += word2[i];
            }
            for(int i = word2.length(); i < word1.length(); i++){
                s += word1[i];
            }
        }
        else if(word2.length() > word1.length()){
            for(int i = 0; i < word1.length(); i++){
                s += word1[i];
                s += word2[i];
            }
            for(int i = word1.length(); i < word2.length(); i++){
                s += word2[i];
            }
        }
        else{
            for(int i = 0; i < word1.length(); i++){
                s += word1[i];
                s += word2[i];
            }
        }
        return s;
    }
};

```
