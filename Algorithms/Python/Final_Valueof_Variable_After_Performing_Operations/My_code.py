class Solution:
    def finalValueAfterOperations(self, operations: List[str]) -> int:
        count = 0
        for i in operations: 
            match i:
                case "X++":
                    count = count + 1
                case "++X":
                    count = count + 1
                case "X--":
                    count = count - 1
                case "--X":
                    count = count - 1
        return count    

