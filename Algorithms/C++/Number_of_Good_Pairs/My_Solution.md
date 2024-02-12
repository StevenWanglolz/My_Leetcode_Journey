# Approach
<!-- Describe your approach to solving the problem. -->
Nested for loop

# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The time complexity of the provided C++ code is O(n^2), where n is the size of the input vector `nums`. The nested loops iterate through all pairs of elements in the vector, resulting in a quadratic growth in the number of comparisons as the size of the input vector increases.

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity of the provided C++ code is O(1), which is constant. The only additional memory used is for the variables `output`, `n`, `i`, and `j`, and they do not depend on the size of the input vector. The code does not use any additional data structures that scale with the input size, so the space complexity remains constant.

# Code

```C++ []
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int output = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(nums[i] == nums[j]){
                    output++;
                }
            }
        }
        return output;
    }
};
```
