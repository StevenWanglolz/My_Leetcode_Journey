## [Original Post](https://leetcode.com/problems/jewels-and-stones/solutions/4583498/jewels-and-stones-easy-sol-using-map/)
# Approach
- Use map
# Complexity
- Time complexity  
The time complexity of the code is O(J + S), where J is the length of the jewels string and S is the length of the stones string.

This is because the code iterates over the jewels string once to create a map of the jewels, and then iterates over the stones string once to check if each stone is in the map. The time complexity of each of these iterations is proportional to the length of the string being iterated over, so the overall time complexity of the code is O(J + S).

Here is a table that summarizes the time complexity of the code:

| Operation | Time Complexity |
|---|---|
| Creating the map of jewels | O(J) |
| Iterating over the stones string | O(S) |
| Checking if each stone is in the map | O(1) |
| Overall time complexity | O(J + S) |
- Space complexity
  The space complexity of the code is O(N), where N is the length of the jewels string.

This is because the code creates a set to store the jewels, and the size of the set is limited by the number of unique jewels. In the worst case, all of the jewels are unique, so the size of the set will be J. The space complexity of the other variables in the code is negligible compared to the size of the set, so the overall space complexity of the code is O(J).

Here is a table that summarizes the space complexity of the code:

| Operation | Space Complexity |
|---|---|
| Creating the set of jewels | O(N) |
| Other variables | O(1) |
| Overall space complexity | O(N) |
# Code
```C++ []
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        map<char,bool> m;
        // map<char,int> n;

        for(auto x:jewels){
            m[x]=true;
        }
        int count=0;
        for(auto x:stones){
            if(m[x]){
                count++;
            }
        }
        
        return count;
    }
};
```
