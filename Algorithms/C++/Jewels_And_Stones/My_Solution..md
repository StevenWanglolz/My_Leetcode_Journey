# Approach
<!-- Describe your approach to solving the problem. -->
Simple for-loop

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The time complexity of the code is O(M * N), where M is the length of the `jewels` string and N is the length of the `stones` string.

This is because the outer loop iterates over each character in the `stones` string, and the inner loop iterates over each character in the `jewels` string. In the worst case, the inner loop will iterate over all of the characters in the `jewels` string for each character in the `stones` string.

Here is a table that summarizes the time complexity of the code:

| Operation | Time Complexity |
|---|---|
| Outer loop | O(N) |
| Inner loop | O(M) |
| Total | O(M * N) |
- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity of the code is O(M), where M is the length of the `jewels` string.

This is because the code uses a hash table to store the jewels. The size of the hash table is proportional to the number of jewels, which is M.

Here is a table that summarizes the space complexity of the code:

| Operation | Space Complexity |
|---|---|
| Hash table | O(M) |
| Total | O(M) |
# Code
```C++ []
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        bool flag = false;
        for(auto s : stones){
            for (auto j : jewels){
                if(s == j){
                    flag = true;
                }
            }
            if(flag == true){
                count++;
            }
            flag = false;
        }
        return count;
    }
};
```