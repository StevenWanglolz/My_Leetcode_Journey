class Solution:
    def truncateSentence(self, s: str, k: int) -> str:
        output = ""
        count = 0
        for w in s:
            if w == " ":
                count += 1
            if count == k:
                break
            output += w   
        return output