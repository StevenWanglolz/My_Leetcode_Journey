class Solution:
    def diStringMatch(self, s: str) -> List[int]:
        i = 0
        d = len(s)
        output = []
        for w in s:
            if w == 'D':
                output.append(d)
                d -= 1
            else:
                output.append(i)
                i += 1
        if s[-1] == 'I':
            output.append(i)
        else:
            output.append(d)
        return output
