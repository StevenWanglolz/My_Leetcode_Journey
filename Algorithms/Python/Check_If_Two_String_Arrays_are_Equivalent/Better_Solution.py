class Solution:
    def arrayStringsAreEqual(self, word1: List[str], word2: List[str]) -> bool:
        # Join all strings in each list and compare the results
        return ''.join(word1) == ''.join(word2)