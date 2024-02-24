# Approach
<!-- Describe your approach to solving the problem. -->
1. Create a map of "a" to "z"

2. Iterate through ```sentence``` and mark the values as ```True``` accordingly.

# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
1. The first loop runs for a constant number of times (26 times) and takes O(1) time.

2. The second loop iterates through each character in the given `sentence`, which has a time complexity of O(N), where N is the length of the sentence.

3. The third loop iterates through all the entries in the map, which has a constant number of entries (26). So, it takes O(1) time.

The overall time complexity is dominated by the second loop, which is O(N), where N is the length of the input sentence. Therefore, the time complexity of your C++ code is O(N).

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
-

1. The `m` map is created to store information about each alphabet letter. In the worst case, this map will have 26 entries (for the 26 letters of the alphabet). Therefore, the space complexity for the map is O(26), which is equivalent to O(1) since it's a constant.

2. Other than the map, you have a few variables (like `i`, `n`, `it`), which take up constant space regardless of the input size.

So, the overall space complexity of the code is O(1) since the dominant factor is the constant space used by the map, and the other variables contribute only a constant amount of space.

# Code

```C++ []
class Solution {
public:
    bool checkIfPangram(string sentence) {
        map<char, bool> m;
        for(int i = 97; i <= 122; i++){
            m[char(i)] = false;
        }
        for(auto n : sentence){
            m[n] = true;
        }
        for(auto it : m){
            if(it.second == false){
                return false;
            }
        }
        return true;
    }
};
```
