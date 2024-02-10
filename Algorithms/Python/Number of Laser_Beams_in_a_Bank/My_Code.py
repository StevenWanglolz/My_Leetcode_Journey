class Solution:
    def numberOfBeams(self, bank: List[str]) -> int:
        row = len(bank)
        col = len(bank[0])
        l = []
        output = 0
        for i in range(row):
            if bank[i] != "0"*col: 
                l.append(i) # * Keep track of all indices
        for i in range(len(l)-1):
            a, b = 0, 0
            for c in bank[l[i]]:
                if c == "1":
                    a += 1
            for c in bank[l[i+1]]:
                if c == "1":
                    b += 1
            output += a*b # * Add the number of lasers
        return output