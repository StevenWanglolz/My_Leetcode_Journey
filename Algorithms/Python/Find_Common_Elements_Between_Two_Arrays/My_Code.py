class Solution:
    def findIntersectionValues(self, nums1: List[int], nums2: List[int]) -> List[int]:
        m = len(nums1)
        n = len(nums2)
        m1 = {}
        m2 = {}
        v1 = 0
        v2 = 0
        output = []
        for i in range(m):
            m1[nums1[i]] = F
        for i in range(n):
            m2[nums2[i]] = False
        for i in range(m):
            if nums1[i] in nums2 and m1[nums1[i]] == False:
                print(nums1[i])
                v1 += 1
                m1[nums1[i]] = True
        for i in range(n):
            if nums2[i] in nums1 and m2[nums2[i]] == False:
                print(nums2[i])
                v2 += 1
                m2[nums2[i]] = True
        output.append(v1)
        output.append(v2)
        return output
