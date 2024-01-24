## Intuition
1. Identify all four situations
2. Create an integer to perform operation on it based on the situtation
## Approach
1. Use Switch(match in python 3.10) to define all four situations. It is similar to if and else if, but simpler.
2. Perform the calculations based on the situation(case).
3. Depending on on the language, remember to add break for every case. In this case, I'm using Python, which does not require a break statement for every case.
## Complexity
Time complexity:
The time complexity of this algorithm is O(n), where n is the number of operations in the input list `operations`. This is because you iterate through each operation once, and each operation takes constant time.

Here's the breakdown:

- The `for` loop iterates through each operation in the list once, and the loop runs in O(n) time.

- Inside the loop:
  - Each `match` case involves constant-time operations (addition or subtraction).
  
Since each operation inside the loop takes constant time, and you perform these operations n times (where n is the length of the input list), the overall time complexity is O(n).
- Space complexity:
- The space complexity of this algorithm is O(1), or constant space. This is because the amount of memory used by the algorithm does not depend on the size of the input. 

Here's the breakdown:

- The primary variable is `count`, which is an integer storing the result.
- The loop variable `i` is used to iterate through the operations, but it doesn't consume additional space as it's just a reference to elements in the list.

There are no data structures or variables that grow with the size of the input `operations`, so the space complexity remains constant regardless of the number of operations. Therefore, the space complexity is O(1).
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