class Solution:
    def reverse(self, s: str) -> str:
        reverse = s[::-1]
        return reverse

    def maximumNumberOfStringPairs(self, words: List[str]) -> int:
        l = []
        count = 0
        for i in range(len(words)):
            l = words[i+1:]
            reverse = self.reverse(words[i])
            if reverse in l:
                count += 1
        return count
