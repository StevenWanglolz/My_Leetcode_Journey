# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
1. **Outer Loop (`for i in range(m):`):** This loop iterates over each customer. It runs `m` times.

2. **Inner Loop (`for j in range(n):`):** This loop iterates over each account balance for a given customer. It runs `n` times for each customer.

3. **Calculating Sum (`sum += accounts[i][j]`):** This operation is performed inside the inner loop and runs `n` times for each customer.

The overall time complexity is O(m * n), where `m` is the number of customers, and `n` is the number of accounts. This is because there are nested loops, and the code performs a constant amount of work inside each iteration of the inner loop.

If `m` and `n` are relatively small and considered constants, you can simplify the time complexity to O(1). However, if the size of the input (`accounts`) can vary, then the time complexity is O(m * n).

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
1. **`m` and `n`:** The variables `m` and `n` are used to store the number of customers and the number of accounts, respectively. Both of them are single integer variables and do not depend on the input size. Therefore, they contribute O(1) to the space complexity.

2. **`maxi` list:** The list `maxi` is used to store the wealth of each customer. In the worst case, it will have `m` elements, where `m` is the number of customers. Therefore, the space complexity contributed by `maxi` is O(m).

In summary, the space complexity of the code is O(m), where `m` is the number of customers. The dominant factor is the `maxi` list used to store the wealth of each customer.

# Code

```Python []class Solution:
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

```
