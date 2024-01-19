class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        max = 0
        for s in sentences:
            if len(s.split()) > max:
                max = len(s.split())
        return max