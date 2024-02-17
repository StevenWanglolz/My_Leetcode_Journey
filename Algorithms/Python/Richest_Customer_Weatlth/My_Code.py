class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        m = len(accounts)
        n = len(accounts[0])
        maxi = []
        for i in range(m):
            sum = 0
            for j in range(n):
                sum += accounts[i][j]
            maxi.append(sum)
        return max(maxi)