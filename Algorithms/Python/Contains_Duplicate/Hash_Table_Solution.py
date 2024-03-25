class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        m = {}
        for n in nums:
            try:
                if m[n] == True:
                    return True
                else:
                    m[n] = True
            except:
                m[n] = True
        return False
