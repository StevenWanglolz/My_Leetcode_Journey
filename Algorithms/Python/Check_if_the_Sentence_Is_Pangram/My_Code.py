class Solution:
    def checkIfPangram(self, sentence: str) -> bool:
        m = defaultdict()
        for i in range(97, 123):
            m[chr(i)] = False
        for n in sentence:
            m[n] = True
        for k, v in m.items():
            if v == False:
                return False
        return True
