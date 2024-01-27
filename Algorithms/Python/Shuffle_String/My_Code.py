class Solution:
    def restoreString(self, s: str, indices: List[int]) -> str:
        l = [""] * len(indices)
        output = ""
        for i in range(len(indices)):
            l[indices[i]] = s[i]
        for string in l:
            output += string
        return output