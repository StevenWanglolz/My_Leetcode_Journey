# Code

```Python []
from typing import List

class Solution:
    def flipAndInvertImage(self, image: List[List[int]]) -> List[List[int]]:
        # Flip and invert the image in one go
        flipped_and_inverted = [[1 - pixel for pixel in row[::-1]] for row in image]
        
        return flipped_and_inverted
```
