class Solution:
    def minOperations(self, boxes: str) -> List[int]:
        n = len(boxes)
        l = []
        output = []
        for i, s in enumerate(boxes):
            if s == '1':
                l.append(i)
        for i in range(n):
            count = 0
            for num in l:
                count += abs(num-i)
            output.append(count)
        return output
