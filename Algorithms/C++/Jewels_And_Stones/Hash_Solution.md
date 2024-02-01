## [Original Post](https://leetcode.com/problems/jewels-and-stones/solutions/4630251/c-beats-100-easiest-solution-hash-table/)

# Approach
- Use hash
# Complexity
- Time complxity  
The time complexity of the code is O(m + n), where m is the length of the `jewels` string and n is the length of the `stones` string.

This is because the code iterates over the `stones` string once to create a hash table of the stone counts, and then iterates over the `jewels` string once to look up the counts of each jewel in the hash table.

Here is a table that breaks down the time complexity of each step of the code:

| Step | Time complexity |
|---|---|
| Create hash table of stone counts | O(n) |
| Iterate over jewels string | O(m) |
| Look up jewel count in hash table | O(1) |

Therefore, the overall time complexity of the code is O(n + m).

| Input | Time complexity |
|---|---|
| m jewels, n stones | O(m + n) |

The space complexity of the code is O(1), as it only uses a constant amount of extra space to store the hash table.
- Space complexity  
The space complexity of the provided code is  **O(1)**.

Here's why:

1. The code declares a hash table `hash` of size 256. Regardless of the lengths of the `jewels` and `stones` strings, this hash table will always occupy a fixed amount of memory (256 integers).
2. No other dynamic data structures are used within the code. The variables `count`, `i`, and `j` are all primitive data types that require negligible space compared to the hash table.

Therefore, the space complexity of the code is dominated by the fixed size of the hash table, making it **O(1)**.
# Code
```C++ []
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int hash[256] = {0};
        int count = 0;
        for(int i = 0;i<stones.size();i++) {
            hash[stones[i]]++;
        }
        for(int i = 0;i<jewels.size();i++) {
            count = count + hash[jewels[i]];
        }
        return count;
    }
};
```