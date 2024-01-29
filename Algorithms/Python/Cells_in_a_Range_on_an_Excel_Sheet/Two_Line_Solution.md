[Source](https://leetcode.com/problems/cells-in-a-range-on-an-excel-sheet/solutions/1823819/java-python-3-simple-code-w-analysis/)
```Python []
def cellsInRange(self, s: str) -> List[str]:
    c1, r1, _, c2, r2 = map(ord, s)
    return [chr(c) + chr(r) for c in range(c1, c2 + 1) for r in range(r1, r2 + 1)]
```