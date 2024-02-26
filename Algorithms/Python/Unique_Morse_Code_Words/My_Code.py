class Solution:
    def uniqueMorseRepresentations(self, words: List[str]) -> int:
        ml = [".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--",
              "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."]
        m = {}
        result = []
        count = 0
        for i in range(26):
            m[chr(i+97)] = ml[i]  # * Map the alphabet
        for w in words:
            s = ""
            for c in w:
                s += m[c]
            print(s)
            if s not in result:
                count += 1
                result.append(s)
        return count
