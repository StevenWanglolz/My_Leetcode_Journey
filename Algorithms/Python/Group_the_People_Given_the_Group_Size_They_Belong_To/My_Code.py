class Solution:
    def groupThePeople(self, groupSizes: List[int]) -> List[List[int]]:
        d = {}
        o = []
        for i in range(500): # * Initialize dictionary
            d[i] = False
        for i in range(len(groupSizes)):
            if d[groupSizes[i]] == False:
                d[groupSizes[i]] = True
        l2 = []
        for k, v in d.items():
            l = []
            if v == True:
                l2.append(k)
        for k in l2:
            count = 0
            for i in range(len(groupSizes)):
                if groupSizes[i] == k:
                    l.append(i)
                    count += 1
                    if count == k:
                        o.append(l) # * Append group to list
                        count = 0
                        l = []
        return o
