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
