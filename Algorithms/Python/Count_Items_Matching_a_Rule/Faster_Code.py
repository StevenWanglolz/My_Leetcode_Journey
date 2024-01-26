class Solution:
    def countMatches(self, items: List[List[str]], ruleKey: str, ruleValue: str) -> int:
        count = 0
        ruleIndex = 0 if ruleKey == "type" else 1 if ruleKey == "color" else 2

        for item in items:
            if item[ruleIndex] == ruleValue:
                count += 1

        return count