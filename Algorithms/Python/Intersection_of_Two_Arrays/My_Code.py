class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        d = {}
        output = []
        for i in range(0, 1001, 1):
            d[i] = False
        for n in nums1:
            d[n] = True
        for n in nums2:
            if d[n] == True:
                output.append(n)
        return set(output)