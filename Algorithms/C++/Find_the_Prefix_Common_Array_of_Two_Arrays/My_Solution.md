# Approach
<!-- Describe your approach to solving the problem. -->
1. Initialize a map (1~50, false)

2. Iterate through A and B and set value to true for its first occurrence, and add 1 to count for its second occurrence.

# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
1. **Initialization of Map:**
   - The loop to initialize the map `m` runs in constant time because it has a fixed number of iterations (50).
   - The time complexity of this part is O(1).

2. **Main Loop:**
   - The main loop iterates through the vectors `A` and `B`, and for each element, it checks and updates the map `m`.
   - The map `m` has a fixed number of elements (50), and the checks and updates are constant time operations.
   - The loop iterates through each element of `A` and `B`, so the time complexity of this part is O(A.size() + B.size()).

3. **Overall Time Complexity:**
   - The overall time complexity is dominated by the main loop, so the final time complexity is O(A.size() + B.size()).

In summary, the time complexity of the code is linear with respect to the combined sizes of vectors `A` and `B`.

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
1. **Map `m`:**
   - The map `m` is created with 50 key-value pairs, and each key corresponds to an integer from 1 to 50. Therefore, the space complexity of `m` is O(1).

2. **Output Vector:**
   - The output vector `output` is created, and its size is determined by the length of vectors `A` and `B`. In the worst case, it could be as large as A.size() + B.size().
   - The space complexity of `output` is O(A.size() + B.size()).

3. **Other Variables:**
   - The variables `count` and the loop index variables have constant space requirements and don't depend on the input size.

4. **Overall Space Complexity:**
   - The overall space complexity is determined by the size of the map `m` and the output vector `output`.
   - The dominant factor is the size of the output vector, so the overall space complexity is O(A.size() + B.size()).

In summary, the space complexity of the code is linear with respect to the combined sizes of vectors `A` and `B`.

# Code

```C++ []
#include <map>
class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int count = 0;
        vector<int> output;
        map<int, bool> m;
        for(int i = 1; i <= 50; i++){
            m[i] = false;
        }
        for(int i = 0; i < A.size(); i++){
            if(m[A[i]] == false){
                m[A[i]] = true;
            }
            else{
                count++;
            }
            if(m[B[i]] == false){
                m[B[i]] = true;
            }
            else{
                count++;
            }
            output.push_back(count);
        }
        return output;
    }
};
```
