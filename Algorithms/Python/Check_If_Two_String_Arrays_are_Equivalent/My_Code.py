class Solution:
    def arrayStringsAreEqual(self, word1: List[str], word2: List[str]) -> bool:
        s1 = ""
        s2 = ""

        for s in word1:
            for c in s:
                s1 += c

        for s in word2:
            for c in s:
                s2 += c
            
        if len(s1)!=len(s2):
            return False
        else:
            for i in range(len(s1)):
                if s1[i] != s2[i]:
                    return False
            return True