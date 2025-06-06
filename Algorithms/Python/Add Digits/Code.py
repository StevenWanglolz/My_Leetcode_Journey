class Solution:
    def addDigits(self, num: int) -> int:
        total = 0
        for c in str(num):
            total += int(c)
        if total > 9:
            return self.addDigits(total)
        return total
