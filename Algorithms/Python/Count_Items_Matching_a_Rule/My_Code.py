class Solution:
    def countMatches(self, items: List[List[str]], ruleKey: str, ruleValue: str) -> int:
        count = 0
        if ruleKey == "type":
            for i in range(len(items)):
                if items[i][0] == ruleValue:
                    count += 1
        elif ruleKey == "color":
            for i in range(len(items)):
                if items[i][1] == ruleValue:
                    count += 1
        else:
            for i in range(len(items)):
                if items[i][2] == ruleValue:
                    count += 1
        return count