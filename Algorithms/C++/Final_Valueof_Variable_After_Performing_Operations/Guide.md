## Intuition
1. Identify all four situations
2. Create an integer to perform operation on it based on the situtation
## Approach
1. Note that in C++, switch only supports int and enum, so here we use a simple if-else statement.
2. Perform the calculations based on the situation.
## Complexity
- Time complexity:
  O(n)  
Loops through the entire list once
- Space complexity:
1. **Input Space:**
   - The primary input is the vector of strings `operations`. The space complexity for the input is O(n * m), where n is the number of operations in the vector and m is the average length of an operation string.

2. **Loop Variables:**
   - The loop variable is the iterator `it`, which contributes O(1) space complexity.

3. **Integer Variable:**
   - The integer variable `count` is used to accumulate the result. It contributes O(1) space complexity.

Combining these factors, the overall space complexity of your algorithm is O(n * m + 1), where n is the number of operations, m is the average length of an operation string, and the "+ 1" represents the space for the integer variable `count`.

The dominant term in this case is the size of the input vector `operations`, so the space complexity is primarily determined by the input size. The loop variable and the integer variable contribute constant space.
## Code
````
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int count = 0;
        for (auto it = operations.begin(); it != operations.end(); ++it) {
            if (*it == "X++" || *it == "++X") {
                count++;
            } else if (*it == "X--" || *it == "--X") {
                count--;
            }
        }
        return count;
    }
};

````