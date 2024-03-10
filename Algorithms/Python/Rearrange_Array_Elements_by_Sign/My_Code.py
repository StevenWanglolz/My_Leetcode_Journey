class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:
        pl = []
        nl = []
        pc = 0
        nc = 0
        output = []
        for n in nums:
            if n > 0:
                pl.append(n)
            else:
                nl.append(n)
        print(pl)
        print(nl)
        for i in range(len(nums)):
            if pc < len(pl):
                output.append(pl[pc])
                pc += 1
            if nc < len(nl):
                output.append(nl[nc])
                nc += 1
        return output
