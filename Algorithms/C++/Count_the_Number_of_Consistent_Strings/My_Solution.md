# Approach
<!-- Describe your approach to solving the problem. -->
1. Keep track of every character in allowed in ```l```.

2. Iterate through words character by character.

# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The first loop that iterates through the characters of the `allowed` string has a time complexity of O(len(allowed)), where len(allowed) is the length of the `allowed` string.

The second loop iterates through each word in the `words` vector, and for each character in the word, it performs a constant-time lookup in the map `m`. Therefore, the time complexity of the second loop is O(len(words) * average_word_length).

The overall time complexity of the code is O(len(allowed) + len(words) * average_word_length), where average_word_length is the average length of the words in the `words` vector.

In big-O notation, we generally focus on the dominant terms, so the time complexity can be simplified to O(len(words) * average_word_length) since this term dominates the overall complexity.

Note: This analysis assumes that the map operations (insertion and lookup) have constant time complexity, which is a reasonable assumption for typical use cases.

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity of the given code is O(1) because the space requirements are not dependent on the input size (the length of the strings in the `words` vector). The primary reason for this is that the map `m` has a constant number of characters (26 lowercase English letters) in this case, regardless of the input size.

Let's break it down:

1. `map<char, bool> m`: This map is created to store whether each character in the `allowed` string is present or not. Since there are a constant number of characters (26 lowercase letters), the space complexity for this map is considered constant, O(1).

2. `int count`: This is just an integer variable and doesn't contribute significantly to the space complexity. It can be considered as O(1).

3. The loops for iterating through the characters in `allowed` and `words` don't have any additional space complexity based on the input size. They only use iterators and boolean variables, which are constant in terms of space.

In summary, the space complexity is O(1) for this code.

# Code

```C++ []
#include <map>

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        map<char, bool> m;
        int count = 0;
        for(auto it : allowed){
            m[it] = true;
        }
        for(auto w : words){
            bool b = true;
            for(auto c : w){
                if(m[c] == false){
                    b = false;
                    break;
                }
            }
            if(b == true){
                count++;
            }
        }
        return count;
    }
};
```
