class Solution:
    def base_convert(self, num: int, b: int) -> str:
        s = ""
        while num:
            n = num % b
            s += str(n)
            num = num // b
        print(s[::-1])
        return s[::-1]

    def isStrictlyPalindromic(self, n: int) -> bool:
        for i in range(2, n-1):
            s = self.base_convert(n, i)
            if len(s) % 2 == 0:
                mid = len(s) // 2 - 1
            else:
                mid = len(s) // 2
            s1 = s[:mid+1]
            s2 = s[mid+1:]
            s2 = s2[::-1]
            if s1 != s2:
                return False
        return True
