## [Original Post](https://leetcode.com/problems/goal-parser-interpretation/solutions/961441/python-one-liner/)
# Code
```Python []
class Solution:
    def interpret(self, command: str) -> str:
        return command.replace('()','o').replace('(al)','al')
```