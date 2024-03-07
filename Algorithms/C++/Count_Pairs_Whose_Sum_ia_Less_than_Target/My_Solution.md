# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The time complexity of the code is O(n^2), where "n" is the size of the input vector nums. This is because there are two nested loops, and for each element in the outer loop, the inner loop iterates through the remaining elements.

The outer loop runs "n" times, and for each iteration of the outer loop, the inner loop runs "n-i-1" times (where "i" is the current index of the outer loop). As a result, the total number of iterations is the sum of the first "n-1" integers, which is approximately (n^2)/2 for large values of "n."

Therefore, the overall time complexity is O(n^2), indicating a quadratic growth rate with the size of the input vector.

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity of the code is O(1), indicating constant space usage, as it only uses a constant amount of extra space regardless of the input size.

# Code

```C++[]
class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] + nums[j] < target){
                    count++;
                }
            }
        }
        return count;
    }
};
```
