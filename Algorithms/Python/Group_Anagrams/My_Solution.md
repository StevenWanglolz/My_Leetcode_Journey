# Approach

Create a map. Key = sorted string, value = sorted string.

# Complexity

- Time complexity:
The time complexity of your code is O(NMlogM), where N is the number of strings in the input list and M is the maximum length of a string.

Here's why:

The for loop runs in O(N) time because it iterates over each string in strs. Inside this loop, you're sorting each string, which takes O(MlogM) time. Therefore, the total time complexity of this loop is O(NMlogM).

- Space complexity:
The space complexity of your code is O(NM).

Here's why:

The dictionary m can have at most N key-value pairs (for the N strings in strs), and each key-value pair can take up to M space (for the M characters in a string). Therefore, the space complexity of m is O(NM).
