# Approach

1. Map all the '1' indices to a list.

2. Go throufh that list and calculate each time.<!-- Describe your approach to solving the problem. -->

# Complexity

- Time complexity:
  <!-- Add your time complexity here, e.g. $$O(n)$$ -->
  Outer Loop (for(char c : boxes)): Iterates once for each character in the input string boxes, which has length n. This contributes O(n) to the overall complexity.
  Inner Loop (for(int num : v)): Nested inside the outer loop, this loop iterates over the elements in the v vector. The size of v depends on the number of '1' characters in boxes, let's say m. Therefore, the inner loop runs m times in the worst case (all '1' characters), contributing O(m) to the complexity.
  abs(num - i) Calculation: Within the inner loop, this operation is performed m times. It has constant time complexity, so its impact on the overall complexity is negligible.
  Combining Complexities:

The outer loop runs n times.
For each iteration of the outer loop, the inner loop runs m times in the worst case.
The total number of operations grows as n \* m.
Worst-Case Scenario:

If all characters in boxes are '1', then m becomes n.
In this case, the time complexity simplifies to n \* n, which is O(n^2).
Average-Case Scenario:

If the number of '1' characters in boxes is generally smaller than n, then m will be smaller as well.
This would result in a more favorable average-case time complexity closer to O(n \* k), where k is the average number of '1' characters.
Therefore:

The worst-case time complexity of the code is O(n^2).
The average-case time complexity depends on the distribution of '1' characters, but it's likely better than the worst case.

---

- Space complexity:
  <!-- Add your space complexity here, e.g. $$O(n)$$ -->

The space complexity of the code is O(n) in the worst case. Here's the breakdown:

Space Usage Components:

Fixed-Size Variables:
n: Constant space as it only stores the string length.
index: Constant space as it tracks the current index.
count: Constant space for temporary calculations.
Dynamic Size Vectors:
v: This stores indices of '1' characters. In the worst case (all '1' characters), it can hold up to n indices, leading to O(n) space complexity.
output: This stores the calculated minimum operations for each position. It has the same size as the input string, which is n, resulting in O(n) space complexity.
Combining Space Usage:

Adding the space requirements of all components, the overall space complexity is dominated by the v and output vectors, both with O(n) space usage. Therefore, the total space complexity is also O(n) in the worst case.

Average-Case Considerations:

Similar to the time complexity, the average-case space complexity might be more favorable depending on the actual distribution of '1' characters in boxes. If there are fewer '1' characters on average, v will not grow as large, leading to a lower average-case space complexity.

In Conclusion:

The worst-case space complexity of the code is O(n).
The average-case space complexity can be lower depending on the input characteristics.

# Code

```C++ []
class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        int index = 0;
        int count = 0;
        vector<int> v;
        vector<int> output;
        for(char c : boxes){ // * Map all indices
            if(c=='1'){
                v.push_back(index);
            }
            index++;
        }
        for(int i=0 ; i<n ; i++){
            count = 0;
            for(int num : v){
                count+=abs(num-i);
            }
            output.push_back(count);
        }
        return output;
    }
};
```
