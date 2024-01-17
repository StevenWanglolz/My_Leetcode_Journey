## Intuition
1. Identify all four situations
2. Create an integer to perform operation on it based on the situtation
## Approach
1. Note that in C++, switch only supports int and enum, so here we use a simple if-else statement.
2. Perform the calculations based on the situation.
## Complexity
Time complexity:
O(n)
Loops through the entire list once

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