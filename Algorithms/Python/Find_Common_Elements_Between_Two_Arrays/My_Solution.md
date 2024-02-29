# Approach
<!-- Describe your approach to solving the problem. -->
1. Map num1 and num2

2. Iterate through each and check from the maps.

# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The time complexity of the code is O(n + m), where n is the length of `nums1` and m is the length of `nums2`.

1. The loop to initialize `m1` and `m2` runs in constant time O(1) since it always iterates up to 101 (a fixed number).
2. The two loops to populate `m1` and `m2` with values from `nums1` and `nums2` respectively, both have a time complexity of O(n + m), where n is the length of `nums1` and m is the length of `nums2`.
3. The final two loops to count the intersections have a time complexity of O(n) and O(m) respectively.

The dominant term in the overall time complexity is the loop to populate `m1` and `m2`, resulting in a final time complexity of O(n + m).

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity of the code is O(1) or O(k), where k is a constant (101 in this case).

1. The dictionaries `m1` and `m2` have a constant size of 101, which doesn't depend on the size of the input arrays `nums1` and `nums2`. Therefore, their space complexity is considered O(1) or O(k), where k is a constant.

2. The additional space used for the variables `n`, `m`, `output`, and `count` are also constant, and they do not depend on the size of the input arrays.

Overall, the space complexity is constant, making it O(1) or O(k).

# Code

```Python []
class Solution:
    def findIntersectionValues(self, nums1: List[int], nums2: List[int]) -> List[int]:
        n = len(nums1)
        m = len(nums2)
        m1 = {}
        m2 = {}
        output = []
        for i in range(101):
            m1[i] = False
            m2[i] = False
        for it in nums1:
            m1[it] = True
        for it in nums2:
            m2[it] = True
        count = 0
        for i in range(n):
            if m2[nums1[i]] == True:
                count += 1
        output.append(count)
        count = 0
        for i in range(m):
            if m1[nums2[i]] == True:
                count += 1
        output.append(count)
        return output

```
