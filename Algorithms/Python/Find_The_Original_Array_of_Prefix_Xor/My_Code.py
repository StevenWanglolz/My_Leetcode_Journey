class Solution:
    def get_num(self, result: int, num1: int) -> int:
        num2 = result ^ num1
        return num2

    def findArray(self, pref: List[int]) -> List[int]:
        output = []
        output.append(pref[0])
        for i in range(1, len(pref)):
            num = self.get_num(pref[i], pref[i-1])
            output.append(num)    
        return output