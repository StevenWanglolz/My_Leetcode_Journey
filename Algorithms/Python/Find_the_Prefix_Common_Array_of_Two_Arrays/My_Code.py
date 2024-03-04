class Solution:
    def findThePrefixCommonArray(self, A: List[int], B: List[int]) -> List[int]:
        m = {}
        output = []
        count = 0
        for i in range(1, 51):
            m[i] = False
        for i in range(len(A)):
            if m[A[i]] == False:
                m[A[i]] = True
            else:
                count += 1
            if m[B[i]] == False:
                m[B[i]] = True
            else:
                count += 1
            output.append(count)
        return output
