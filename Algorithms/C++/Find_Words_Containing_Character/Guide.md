# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Iterate through the entire list
# Approach
<!-- Describe your approach to solving the problem. -->
1. Create a vector to store the indices.
2. use for(auto it...) to iterate through the list.
3. Here's the key. When using the find function with the "it" iterator, do not derefernce it with "*it" becuase of precedence issues. Use "it->find()" instead.
4. Use the "push_back" function to add the indices to the vector under the right condition.
# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
O(n)  
Loops through the entire list
# Code
```
#include<string>

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> v;
        int index = 0;
        for(auto it = words.begin(); it != words.end(); ++it){
            if(it->find(x) != string::npos){
                v.push_back(index);
            }
            index++;
        }
        return v;
    }
};
```