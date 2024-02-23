# Credits to cheung4843

# Complexity

- Time complexity

The key operations influencing the time complexity are the operations inside the loop:

1. Inserting or updating an element in the map (`m[it] += 1` or `m[it] = 1`): The `map` insertion and update operations have an average-case time complexity of O(log n), where n is the size of the map.

2. Searching for an element in the map (`m.find`): The `find` operation for a map also has an average-case time complexity of O(log n).

The loop iterates through each element in the `nums` vector, and for each element, it performs a constant number of operations (insertion/update and two finds) on the map.

Therefore, the overall time complexity of the provided code is O(n log n), where n is the length of the input vector `nums`. The dominant factor is the insertion/update and find operations within the loop, which are logarithmic in the size of the map.

- Space complexity

The key data structure contributing to space complexity is the `map<int, int> m`. Let's break down the space complexity:

1. **Space used by the map (`m`):**
   - In the worst case, the map can contain all unique elements from the input vector `nums`.
   - The space used by the map is proportional to the number of unique elements in `nums`.
   - Therefore, the space complexity due to the map is O(n), where n is the length of the input vector `nums`.

2. **Other variables (`count`, `it`, etc.):**
   - These variables use constant space regardless of the size of the input vector.
   - They do not contribute significantly to the overall space complexity.

In summary, the space complexity of the provided code is O(n), where n is the length of the input vector `nums`, due to the space used by the `map<int, int> m`.

# Code

```C++ []
class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count = 0;
        map<int, int> m;
        vector<int> v;
        for(auto it: nums){
            if (m.find(it) != m.end()) {
                m[it] += 1;
            } else {
                m[it] = 1;
            }

            if(m.find(it+k) != m.end()){
                count += m[it+k];
            }
            if(m.find(it-k) != m.end()){
                count += m[it-k];
            }
        }
        return count;
    }
};
```
