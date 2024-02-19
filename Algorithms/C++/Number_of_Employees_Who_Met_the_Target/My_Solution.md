# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The time complexity of the code is O(N), where N is the number of elements in the `hours` vector.

Explanation:

1. The code uses a simple loop that iterates through each element in the `hours` vector exactly once.
2. Inside the loop, there is a constant-time operation (comparison `it >= target`) for each element.
3. The loop runs N times, where N is the size of the `hours` vector.

Since each iteration of the loop takes constant time, the overall time complexity is linear with respect to the size of the input vector. Therefore, the time complexity is O(N).

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity of the code is O(1), constant space.

Explanation:

1. The code uses a single variable `o` to keep track of the number of employees who met the target. This variable requires constant space, as it does not depend on the size of the input vector.

2. The loop iterates through each element in the `hours` vector, but it doesn't use additional data structures or allocate memory that scales with the input size.

As a result, the space complexity is O(1), indicating that the amount of memory used by the algorithm remains constant regardless of the input size.

# Code

```
class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int o = 0;
        for(auto it : hours){
            if(it >= target){
                o++;
            }
        }
        return o;
    }
};
```
