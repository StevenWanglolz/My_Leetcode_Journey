class Solution:
    def reverseWords(self, s: str) -> str:
        output = ""
        words = s.split()
        for i in range(len(words)):
            if i == len(words)-1:
                output += words[i][::-1]
            else:
                output += words[i][::-1]
                output += " "
        return output
