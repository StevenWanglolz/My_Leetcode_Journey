# Approach
<!-- Describe your approach to solving the problem. -->
1. Map num1 and num2

2. Iterate through each and check from the maps.

# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The time complexity of the code is O(n + m), where n is the size of `nums1` and m is the size of `nums2`.

Here's the breakdown:

1. The loop to initialize `m1` and `m2` runs in constant time O(1) since it always iterates up to 101 (a fixed number).
2. The two loops to populate `m1` and `m2` with values from `nums1` and `nums2` respectively, both have a time complexity of O(n + m), where n is the size of `nums1` and m is the size of `nums2`.
3. The final two loops to count the intersections have a time complexity of O(n) and O(m) respectively.

The dominant term in the overall time complexity is the loop to populate `m1` and `m2`, resulting in a final time complexity of O(n + m).

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity of the code is O(k), where k is a constant (101 in this case).

Here's the breakdown:

1. The vectors `nums1`, `nums2`, `output`, and the variable `count` are all constant in size and do not depend on the input sizes. They contribute O(1) to the space complexity.

2. The two `map<int, bool>` containers `m1` and `m2` have a constant size of 101, which doesn't depend on the size of the input vectors. Therefore, their space complexity is considered O(1) or O(k), where k is a constant.

Overall, the space complexity is constant, making it O(1) or O(k).

# Code

```C++ []
class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> output;
        map<int, bool> m1;
        map<int, bool> m2;
        int count = 0;
        for(int i = 0; i <= 100; i++){
            m1[i] = false;
            m2[i] = false;
        }
        for(auto it : nums1){
            m1[it] = true;
        }
        for(auto it : nums2){
            m2[it] = true;
        }
        for(int i = 0; i < n; i++){
            if(m2[nums1[i]] == true){
                count++;
            }
        }
        output.push_back(count);
        count = 0;
        for(int i = 0; i < m; i++){
            if(m1[nums2[i]] == true){
                count++;
            }
        }
        output.push_back(count);
        return output;
    }
};
```
