# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
1. Sort the list.  

2. Append the sorted list to an empty string.
# Approach
<!-- Describe your approach to solving the problem. -->
1. Create a list with the same size as the list provided called, and an empty string.  

2. First, use a for-loop to sort the list by appending it accordingly to the new list.  

3. Secondly, use another for-loop to append the characters in the correct order.
# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The time complexity of the code is O(n) where n is the length of the string. This is because the code iterates through the string twice, once to build the vector and once to add the characters to the output string.

Here is a more detailed analysis of the time complexity:

* Line 2: `string output = "";` - This line takes constant time O(1).
* Line 3: `vector<string> v(indices.size(), "");` - This line also takes constant time O(1), because creating a vector of size n with empty strings takes constant time.
* Lines 4-6: `for(int i = 0; i < indices.size(); i++){ v[indices[i]] = s[i]; }` - This loop iterates n times, and each iteration takes constant time O(1) to access the i-th element of the string and the vector. Therefore, this loop takes O(n) time.
* Lines 7-8: `for(auto it = v.begin(); it != v.end(); ++it){ output += *it; }` - This loop also iterates n times, and each iteration takes constant time O(1) to access the element and add it to the output string. Therefore, this loop also takes O(n) time.
* Line 9: `return output;` - This line takes constant time O(1).

In conclusion, the time complexity of the code is O(n) + O(n) = O(n).
- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity of the code is also O(n). Here's a breakdown:

1. **`string output`:** This string grows to the length of the original string (n) during the second loop, contributing O(n) space.
2. **`vector<string> v`:** This vector also holds n strings, each potentially of length n (worst case when the original string has no repeated characters). Therefore, it contributes O(n^2) space.
# Code
```
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string output = "";
        vector<string> v(indices.size(), "");
        for(int i = 0; i < indices.size(); i++){
            v[indices[i]] = s[i];
        }
        for(auto it = v.begin(); it != v.end(); ++it){
            output += * it;
        }
        return output;
    }
};
```