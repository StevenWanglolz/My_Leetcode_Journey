# Approach
<!-- Describe your approach to solving the problem. -->
1. Create a map{int, sting} and initialize it as {0 to 9, ""}

2. Iterate through rings and determine if the index is odd or even.

If the index is even, add the ring and color to the map accordingly.

# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
1. **Initialization of Map (`m`):**
   - This has a constant time complexity of O(1) since the map size is fixed at 10.

2. **Loop through the Input String (`rings`):**
   - The loop runs for each character in the input string, so its time complexity is O(len(rings)).

3. **Manipulation of Map (`m`) Inside the Loop:**
   - For each even index in the input string, it performs operations on the map (adding a character to the string associated with a map key). The number of iterations depends on the length of the input string, so the time complexity is O(len(rings)).

4. **Loop through the Map (`m`):**
   - The loop iterates over the map, which has a constant size of 10. Therefore, the time complexity is O(1).

Overall, the dominant factor is the loop through the input string, so the final time complexity is O(len(rings)).

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
1. **Map (`m`):**
   - The map has a constant size of 10 keys. Therefore, its space complexity is O(1).

2. **Integer (`count`):**
   - This variable is independent of the input size and has a constant space complexity of O(1).

3. **String Manipulation Inside the Loop:**
   - The space used for the strings associated with each key in the map depends on the length of the input string. However, since the maximum length of any string in the map is limited to the length of the input string divided by 2 (due to the condition `if(i % 2 == 0)`), it is still within the bounds of O(len(rings)/2), which simplifies to O(len(rings)).

Therefore, the overall space complexity is O(len(rings)).

# Code

```C++ []
# include <map>
class Solution {
public:
    int countPoints(string rings) {
        int count = 0;
        map<int, string> m;
        for(int i = 0; i < 10; i++){
            m[i] = "";
        }
        for(int i = 0; i < rings.size(); i++){
            if(i % 2 == 0){
                m[(int)rings[i+1]] += rings[i];
            }
        }
        for(auto it : m){
            if(it.second.find("R")!=string::npos && \
            it.second.find("G")!=string::npos && \
            it.second.find("B")!=string::npos){
                count++;
            }
        }
        return count;
    }
};

```
