class Solution:
    def findMatrix(self, nums: List[int]) -> List[List[int]]:
        freq = [0] * 201
        m = [[]]
        for n in nums:
            if freq[n] == len(m): # * New element
                m.append(n)
            else:
                m[freq[n]].append(n) # * element exists
            freq[n] += 1
        return m
