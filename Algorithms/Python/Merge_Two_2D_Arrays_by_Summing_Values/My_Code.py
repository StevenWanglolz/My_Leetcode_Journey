class Solution:
    def mergeArrays(self, nums1: List[List[int]], nums2: List[List[int]]) -> List[List[int]]:
        d = {}
        output = []
        for i in range(1001):
            d[i] = 0
        for n in nums1:
            d[n[0]] += n[1]
        for n in nums2:
            d[n[0]] += n[1]
        for k, v in d.items():
            if v != 0:
                output.append([k, v])
        return output