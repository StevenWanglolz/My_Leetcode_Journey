# Approach
<!-- Describe your approach to solving the problem. -->
Reverse and then invert.

# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
O(n2)

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
O(1)

# Code

```Python []
class Solution:
    def flipAndInvertImage(self, image: List[List[int]]) -> List[List[int]]:
        for im in image:
            i = 0
            j = len(image)-1
            while i < j:
                temp = im[i]
                im[i] = im[j]
                im[j] = temp
                i += 1
                j -= 1
        for i in range(len(image)):
            for j in range(len(image[i])):
                if image[i][j] == 1:
                    image[i][j] = 0
                else:
                    image[i][j] = 1
        return image

```
