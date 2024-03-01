# Approach
<!-- Describe your approach to solving the problem. -->
1. Create a hashmap(character, number) for s and t ```d1``` and ```d2```.

2.If the number of map[character] in d1 is bigger than d2, calculate the difference and add it to output.

# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The time complexity of the C++ code is O(n), where n is the length of the input strings `s` and `t`.

Here's the breakdown:

1. The first loop to initialize `m1` and `m2` has a constant time complexity O(1) since it always iterates over a fixed number of characters (27 in this case).

2. The two loops to populate `m1` and `m2` with values from strings `s` and `t` respectively both have a time complexity of O(n), where n is the length of the input strings.

3. The final loop that iterates over the map `m1` has a time complexity of O(1) because it iterates over a fixed number of characters (27).

Therefore, the dominant term in the overall time complexity is the loop that iterates over the characters in strings `s` and `t`, resulting in an overall time complexity of O(n).

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity of the code is O(1) or O(k), where k is a constant (27 in this case).

Here's the breakdown:

1. The two `map<char, int>` containers, `m1` and `m2`, have a constant size of 27, which doesn't depend on the length of the input strings. Therefore, their space complexity is considered O(1) or O(k), where k is a constant.

2. The variable `output` is constant in size and does not depend on the length of the input strings. It contributes O(1) to the space complexity.

Overall, the space complexity is constant, making it O(1) or O(k).

# Code

```C++ []
#include <map>
class Solution {
public:
    int minSteps(string s, string t) {
        int output = 0;
        map<char, int> m1;
        map<char, int> m2;
        for(int i = 96; i <= 122; i++){
            m1[char(i)] = 0;
            m2[char(i)] = 0;
        }
        for(auto it : s){
            m1[it] += 1;
        }
        for(auto it : t){
            m2[it] += 1;
        }
        for(auto it : m1){
            if(it.second > m2[it.first]){
                output += it.second - m2[it.first];
            }
        }
        return output;
    }
};
```
