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
  O(n)  
The algorithm iterates through the entire list  

- Space complexity:     
1. **Input Space:**
   - The primary input is the vector of strings `words`. The space complexity for the input is O(n * m), where n is the number of words in the vector and m is the average length of a word.

2. **Output Space:**
   - The output space is the vector `v`, which stores the indices of words containing the character `x`. The space required for the output is O(k), where k is the number of words that satisfy the condition.

3. **Loop Variables:**
   - The loop variables include the iterator `it`, the integer variable `index`, and the vector `v`. These contribute O(1) space complexity.

 Combining these factors, the overall space complexity of your algorithm is O(n * m + k), where n is the number of words, m is the average length of a word, and k is the number of words containing the character `x`. The dominant term in this case is the input space, as it grows with the size of the input vector and the average length of words. The space complexity of the loop variables and output vector is comparatively smaller.

 It's important to note that space complexity analysis often considers the dominant or most significant terms. In this case, the size of the input vector `words` dominates the space complexity.
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