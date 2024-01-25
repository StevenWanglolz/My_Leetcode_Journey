# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Compare the two string the way which was described in the question
# Approach
<!-- Describe your approach to solving the problem. -->
1. Use two for-loops to iterate through the two lists and create s1 and s2.
2. Compare the length of the two strings. If they're different then that means they are not equal.
3. If they are the same length, compare the characters one by one.
# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
 **The time complexity of the code is O(n^2) in the worst-case scenario.**

Here's the breakdown:

**1. String Construction:**
   - The two nested loops for constructing `s1` and `s2` iterate over all characters in `word1` and `word2`.
   - In the worst case, each loop executes `n` times (where `n` is the total number of characters), leading to `n^2` string concatenations and character comparisons.

**2. String Length Comparison:**
   - Checking `s1.size() != s2.size()` takes constant time, O(1).

**3. Character-by-Character Comparison:**
   - The final loop iterates up to `n` times to compare characters of `s1` and `s2`.
   - Each iteration involves constant-time operations, O(1).

**Overall Time Complexity:**

- The nested loops for string construction dominate the time complexity, resulting in O(n^2).
- Other operations within those loops or having constant time complexity don't affect the overall O(n^2) behavior.

**Potential Optimization:**

- The code could be optimized to O(n) time complexity by directly comparing characters without constructing intermediate strings. This would eliminate the nested loops and reduce the time complexity.

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
You're right, the previous analysis focused solely on the time complexity. Let's consider the space complexity of the code:

**Space Complexity:**

* **Temporary Strings:** The construction of `s1` and `s2` creates two temporary strings in memory. In the worst-case scenario, each string can grow to the size of the entire combined words, making the space complexity **O(n)** where `n` is the total number of characters in both `word1` and `word2`.
* **Additional Variables:** Other variables like loop iterators and `i` require small constant space, negligible compared to the temporary strings.

**Therefore, the overall space complexity of the code is O(n).**

**Optimization for Space:**

* By comparing characters directly, as suggested for time complexity optimization, we can avoid creating the temporary strings, reducing the space complexity to **O(1)** as no additional space is required beyond the existing input lists.

Remember, optimizing for time or space should depend on the specific needs of your program. While reducing time complexity might be crucial in some scenarios, minimizing space usage might be a priority in others.

# Code
```
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1 = "";        
        string s2 = "";        
        for(string s: word1){
            for(char c: s){
                s1 += c;
            }
        }

        for(string s: word2){
            for(char c: s){
                s2 += c;
            }
        }
        
        if(s1.size() != s2.size()){
            return false;
        }
        else{
            for(int i = 0; i < s1.size(); i++){
                if(s1[i] != s2[i]){
                    return false;
                }
            }
            return true;
        }
    }
};
```