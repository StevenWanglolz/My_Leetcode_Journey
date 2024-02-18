# Approach
<!-- Describe your approach to solving the problem. -->

# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

1. **Initialization of map `m`:** This loop runs 500 times, which is a constant number. Therefore, it contributes O(1) to the time complexity.

2. **Setting values in map `m`:** This loop runs `groupSizes.size()` times, where `groupSizes.size()` is the number of elements in the `groupSizes` vector. This contributes O(groupSizes.size()) to the time complexity.

3. **Building the vector `v2`:** This loop iterates over the map items, which has a maximum of 500 items. Therefore, it contributes O(500) or O(1) to the time complexity.

4. **Building the output vector `o`:** This loop runs `groupSizes.size()` times and performs constant-time operations within the loop. It contributes O(groupSizes.size()) to the time complexity.

The overall time complexity is dominated by the loops that set values in the map and build the output vector. Therefore, the final time complexity is O(groupSizes.size()).

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

1. **Map `m`:** The map `m` has a constant size of 500 keys and their associated Boolean values. Therefore, it contributes O(500) or O(1) to the space complexity.

2. **Vector `v2`:** The vector `v2` stores the keys from the map where the associated value is true. In the worst case, it can have a maximum size of 500. It contributes O(500) or O(1) to the space complexity.

3. **Vector `v`:** The vector `v` stores intermediate group information. Its size is determined by the number of elements in `groupSizes`, and in the worst case, it could be as large as the input vector. It contributes O(groupSizes.size()) to the space complexity.

4. **Vector of vectors `o`:** The vector of vectors `o` stores the final output. Its size is determined by the number of groups created, which is related to the input vector size. In the worst case, it could be as large as the input vector. It contributes O(groupSizes.size()) to the space complexity.

In summary, the space complexity is primarily dominated by the sizes of the map, vector `v2`, vector `v`, and vector of vectors `o`. Therefore, the overall space complexity is O(groupSizes.size()).

# Code

```C++ []
class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        map<int, bool> m;
        for(int i = 0; i < 500; i++){ // * Initialize map
            m[i] = false;
        }
        for(int i = 0; i < groupSizes.size(); i++){
            if(m[groupSizes[i]] == false){ 
                m[groupSizes[i]] = true;
            }
        }
        vector<int> v2; // * All numbers in the list
        for(auto it : m){
            if(it.second == true){
                v2.push_back(it.first);
            }
        }
        int count = 0;
        vector<int> v; // * Vector within o
        vector<vector<int>> o; // * Output vector
        for(auto it : v2){
            for(int i = 0; i < groupSizes.size(); i++){
                if(groupSizes[i] == it){
                    v.push_back(i);
                    count ++;
                    if(count == it){
                        o.push_back(v);
                        count = 0;
                        v.clear();
                    }
                }
            }
        }
        return o;
    }
};
```
