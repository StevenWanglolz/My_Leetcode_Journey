# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Use the push back function
# Approach
<!-- Describe your approach to solving the problem. -->
1. Get the size of the vector nums.
     
2. Use a for loop to iterate through the list, and use vector.push_back() fucntion to concatenate each element.
# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The time complexity of the code is O(n), where n is the initial size of the input vector `nums`. Here's the explanation:

1. The code uses a loop to iterate through each element in the original vector `nums`.  
   
2. Inside the loop, the code appends each element to the end of the vector using `push_back`.  
   
3. The loop iterates through each element of the original vector once.

Since the loop iterates through each element once, and the time complexity of the `push_back` operation is O(1) (amortized constant time), the overall time complexity is O(n), where n is the initial size of the input vector. The `push_back` operation itself may take constant time on average, but the loop runs n times.
- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity of the code is also O(N), where N is the initial size of the input vector `nums`. The `push_back` method is used inside a loop to append each element of the vector to itself. This modification is done in-place, and the space required for the additional elements is constant for each iteration of the loop.

As a result, the space complexity is linear, O(N), since it scales linearly with the initial size of the input vector.
# Code
```
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; i++){
            nums.push_back(nums[i]);
        }
        return nums;
    }
};
```