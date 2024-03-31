# Approach

Create a map. Key = sorted string, value = sorted string.

# Complexity

- Time complexity:
The time complexity of your code is O(NMlogM), where N is the number of strings in the input list and M is the maximum length of a string.

Here's why:

The first for loop runs in O(N) time because it iterates over each string in strs. Inside this loop, you're sorting each string, which takes O(MlogM) time. Therefore, the total time complexity of this loop is O(NMlogM).

The second for loop also runs in O(N) time because it iterates over each key-value pair in m. Inside this loop, you're iterating over each string in the value (which is a vector), which takes O(M) time. Therefore, the total time complexity of this loop is O(NM).

Since O(NMlogM) is larger than O(NM), the overall time complexity is O(NMlogM).

- Space complexity:
Here's why:

The map m can have at most N key-value pairs (for the N strings in strs), and each key-value pair can take up to M space (for the M characters in a string). Therefore, the space complexity of m is O(NM).

The vector v can also have at most N elements (for the N strings in strs), and each element can take up to M space (for the M characters in a string). Therefore, the space complexity of v is O(NM).

Since both m and v have a space complexity of O(NM), and they are not nested, you add their space complexities, not multiply. Since O(NM) + O(NM) = O(2NM), and constants are dropped in Big O notation, the overall space complexity is O(NM).
