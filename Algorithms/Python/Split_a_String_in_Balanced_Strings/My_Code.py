class Solution:
    def balancedStringSplit(self, s: str) -> int:
        r = 0
        l = 0
        string = ""
        my_list = []
        for c in s:
            if c == "R":
                string += c
                r += 1
            else:
                string += c
                l += 1
            if r == l: # * string finished, add to list
                my_list.append(string)
                r = 0 # * reset everything
                l = 0
                string = ""
                print(string)
        return len(my_list)