# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The code uses three nested loops, and the variable `b` is used to track whether the arithmetic triplets are found.

The outer loop runs for `nums.size() - 2` iterations, and for each iteration of the outer loop, there is a middle loop that runs for `nums.size() - i` iterations, and an inner loop that runs for `nums.size() - j` iterations.

Therefore, the overall time complexity of the code can be expressed as the sum of the series:

\[ \sum_{i=0}^{n-2} \sum_{j=i}^{n-1} \sum_{k=j}^{n-1} 1 \]

This sum evaluates to \( O(n^3) \), where \( n \) is the size of the input vector `nums`.

Therefore, the time complexity of the provided C++ code is \( O(n^3) \), where \( n \) is the size of the input vector `nums`. The triple nested loops contribute to this cubic time complexity.

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity of the C++ code is O(1) or constant space. The reason for this is that the code uses a constant amount of extra space regardless of the size of the input vector `nums`.

The only variables used in the function are `count`, `i`, `j`, `k`, `b`, `diff`, and `nums`. Among these, `count`, `i`, `j`, `k`, `b`, and `diff` are constant in terms of space, as they are not dependent on the size of the input vector. The vector `nums` is the input itself and is not counted towards the space complexity of the algorithm.

The function does not use any data structures that grow with the size of the input, so the space complexity is O(1).

# Code

```C++ []
class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int count = 0;
        for(int i = 0; i < nums.size()-2; i++){
            bool b = false;
            for(int j = i; j < nums.size(); j++){
                if(nums[j] == nums[i] + diff){
                    for(int k = j; k < nums.size(); k++){
                        if(nums[k] == nums[i] + diff + diff){
                            b = true;
                        }
                    }
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
