## Intuition
1. Identify all four situations
2. Create an integer to perform operation on it based on the situtation
## Approach
1. Use Switch(match in python 3.10) to define all four situations. It is similar to if and else if, but simpler.
2. Perform the calculations based on the situation(case).
3. Depending on on the language, remember to add break for every case. In this case, I'm using Python, which does not require a break statement for every case.
## Complexity
Time complexity:
O(n)

## Code
````
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
````