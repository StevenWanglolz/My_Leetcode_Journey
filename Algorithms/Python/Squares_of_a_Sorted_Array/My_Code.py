class Solution:
    def quicksort(self, arr: List[int]) -> List[int]:
        if len(arr) <= 1:
            return arr
        pivot = arr[0]
        left = [x for x in arr if x < pivot]
        mid = [x for x in arr if x == pivot]
        right = [x for x in arr if x > pivot]
        return self.quicksort(left) + mid + self.quicksort(right)

    def sortedSquares(self, nums: List[int]) -> List[int]:
        l = []
        for n in nums:
            l.append(n * n)
        l = self.quicksort(l)
        return l
