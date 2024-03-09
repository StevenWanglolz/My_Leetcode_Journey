class Solution:
    def firstPalindrome(self, words: List[str]) -> str:
        n = len(words)
        for w in words:
            if len(w) % 2 == 1:
                mid = len(w) // 2
                s1 = w[:mid]  # Exclude the middle character
                # Start from the character after the middle
                s2 = w[mid+1:][::-1]
                if s1 == s2:
                    return w
            else:
                mid = len(w) // 2
                s1 = w[:mid]  # No change
                s2 = w[mid:][::-1]  # No change
                if s1 == s2:
                    return w
        return ""
