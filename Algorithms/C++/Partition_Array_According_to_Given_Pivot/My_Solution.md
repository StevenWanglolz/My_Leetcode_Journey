# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The time complexity of the code is O(N), where N is the number of elements in the input vector `nums`. Let's analyze the code:

1. The first loop iterates through `nums` to collect elements less than the pivot, which is a linear operation with O(N) time complexity.

2. The second loop collects elements equal to the pivot, and again, it's a linear operation with O(N) time complexity.

3. The third loop collects elements greater than the pivot, also with O(N) time complexity.

Combining these operations, the overall time complexity is O(N) since the loops are executed sequentially, and the individual time complexities add up linearly.

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity of the codee is O(N), where N is the number of elements in the input vector `nums`. Let's analyze the space usage:

1. The additional vector `v` is used to store elements less than, equal to, and greater than the pivot. The size of `v` is directly proportional to the size of `nums`.

2. The space complexity is dominated by the space required for the output vector `v`, which grows linearly with the size of `nums`.

Therefore, the overall space complexity is O(N).

# Code

```
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> v;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < pivot){
                v.push_back(nums[i]);
            }
        }   
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] ==  pivot){
                v.push_back(nums[i]);
            }
        }
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > pivot){
                v.push_back(nums[i]);
            }
        }
        return v;
    }
};
```
