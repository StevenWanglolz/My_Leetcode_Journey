class Solution:
    def makeSmallestPalindrome(self, s: str) -> str:
        i = 0
        j = len(s) - 1
        output = list(s)
        while i < j:
            if s[i] != s[j] and s[i] > s[j]:
                output[i] = s[j]
            elif s[i] != s[j] and s[j] > s[i]:
                output[j] = s[i]
            i += 1
            j -= 1
        return ''.join(output)
