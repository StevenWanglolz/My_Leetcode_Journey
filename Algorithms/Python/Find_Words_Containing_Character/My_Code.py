class Solution:
    def findWordsContaining(self, words: List[str], x: str) -> List[int]:
        l = []
        for i, s in enumerate(words):
            if x in s:
                l.append(i)
        return l
        