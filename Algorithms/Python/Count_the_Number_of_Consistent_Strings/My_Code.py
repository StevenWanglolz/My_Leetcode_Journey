class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        l = []
        count = 0
        for a in allowed:
            l.append(a)
        for w in words:
            for c in w:
                b = True
                if c not in l:
                    b = False
                    break
            if b == True:
                count += 1
        return count
