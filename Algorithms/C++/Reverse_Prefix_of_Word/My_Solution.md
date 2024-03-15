# Approach

Two pointers

# Complexity

- Time complexity:
O(n)

- Space complexity:
O(n)

# Code

```C++ []
class Solution {
public:
    string reversePrefix(string word, char ch) {
        int found = -1;
        for(int i = 0; i < word.length(); i++){
            if(word[i] == ch){
                found = i;
                break;
            }
        }
        if(found != -1){
            string s = "";
            int j = found;
            for(j-1; j >= 0; j--){
                s += word[j];
            }
            cout << s << endl;
            for(int i = found+1; i < word.length(); i++){
                s += word[i];
            }
            return s;
        }
        return word;
    }
};
```
