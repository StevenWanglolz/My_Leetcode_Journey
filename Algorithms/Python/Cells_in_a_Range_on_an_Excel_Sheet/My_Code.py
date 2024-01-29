class Solution:
    def cellsInRange(self, s: str) -> List[str]:
        l = []
        output = ""
        for i in range (ord(s[3])-ord(s[0])+1):
            for j in range(int(s[4])-int(s[1])+1):
                output += chr(i+ord(s[0]))
                output += str(j + int(s[1])) 
                l.append(output) 
                output = ""      
        return l