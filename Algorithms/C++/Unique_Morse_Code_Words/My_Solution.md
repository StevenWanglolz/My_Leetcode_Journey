# Approach
<!-- Describe your approach to solving the problem. -->
1. Map the alphabet accordingly.

2. Keep a map of whether a morse code is unique.

# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
1. The first loop that maps each character of the alphabet to its Morse code has a constant time complexity since it always iterates 26 times. Thus, it's O(26), which simplifies to O(1).

2. The second loop iterates through each word in the `words` vector. For each character in a word, it performs constant-time operations (such as string concatenation and map lookups). Therefore, the time complexity of the second loop is O(len(words) * average_word_length), where `average_word_length` is the average length of the words in the `words` vector.

3. Inside the second loop, the check `it == m2.end()` and the subsequent insertion operation into the `m2` map both have constant time complexity.

Putting it all together, the overall time complexity is O(1) + O(len(words) *average_word_length), where the dominant term is O(len(words)* average_word_length).

In big-O notation, we focus on the dominant terms, so the time complexity of the code is O(len(words) * average_word_length).

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code

```C++ []
#include <map>
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        int count = 0;
        map<char, string> m;
        map<string, bool> m2;
        vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        for(int i = 0; i < 26; i++){ // * Map the alphabet
            m[char(i+97)] = morse[i];
        }
        for(auto w : words){
            string s = "";
            for(auto c : w){
                s += m[c];
            }
            auto it = m2.find(s);
            if(it == m2.end()){
                count++;
                m2[s] = true;
            }
        }
        return count;
    }
};

```
