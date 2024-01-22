class Solution:
    def garbageCollection(self, garbage: List[str], travel: List[int]) -> int:
        m = p = g = index = output = 0
        for i, w in enumerate(garbage):
            if "M" in w:
                for c in w:
                    if c == "M":
                        m = m + 1
                index = i
        if m != 0:
            output += m
            for i in range(index):
                output += travel[i]
        index = 0
        print(output)
        for i, w in enumerate(garbage):
            if "P" in w:
                for c in w:
                    if c == "P":
                        p = p + 1
                index = i
        if p != 0:
            output += p
            for i in range(index):
                output += travel[i]
        index = 0
        print(output)
        for i, w in enumerate(garbage):
            if "G" in w:
                for c in w:
                    if c == "G":
                        g = g + 1
                index = i
        if g != 0:
            output += g
            for i in range(index):
                output += travel[i]
        print(output)
        return output






    
        
    

