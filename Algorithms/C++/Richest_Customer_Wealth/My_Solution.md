# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
1. **Outer Loop (`for(int i = 0; i < m; i++)`):** This loop iterates over each customer. It runs `m` times.

2. **Inner Loop (`for(int j = 0; j < n; j++)`):** This loop iterates over each account balance for a given customer. It runs `n` times for each customer.

The overall time complexity is O(m * n), where `m` is the number of customers, and `n` is the number of accounts. This is because there are nested loops, and the code performs a constant amount of work inside each iteration of the inner loop.

If `m` and `n` are relatively small and considered constants, you can simplify the time complexity to O(1). However, if the size of the input (`accounts`) can vary, then the time complexity is O(m * n).

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
1. **`m` and `n`:** The variables `m` and `n` are used to store the number of customers and the number of accounts, respectively. Both of them are single integer variables and do not depend on the input size. Therefore, they contribute O(1) to the space complexity.

2. **`sum` and `max`:** Both `sum` and `max` are scalar variables that require constant space, O(1), regardless of the input size.

In summary, the space complexity of the code is O(1), as the amount of memory used by the algorithm remains constant regardless of the input size. The algorithm does not use any additional data structures or memory that scales with the input size.

# Code

```C++ []
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m = accounts.size();
        int n = accounts[0].size();
        int sum = 0;
        int max = 0;
        for(int i = 0; i < m; i++){
            sum = 0;
            for(int j = 0; j < n; j++){
                sum += accounts[i][j];
            }
            if(sum > max){
                max = sum;
            }
        }
        return max;
    }
};

```

```
