# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
I thought of three for loops to go through metal, paper, and glass.
# Approach
<!-- Describe your approach to solving the problem. -->
1. Create the varaibles necessary, e.g., the amount of m, p, and g, the index of the last house, and the output.  
   
2. The outer loop (enumerate) goes through the entire list.  
   
3. The inner loop goes throught the character of each string, and checks the amount of matching characters.  
   
4. For the time required to commute between houses, I only note the last index, and iterate through the list of time required.  
   
5. Finally, add the numbers to output after each loop and repeat this process three times.
# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
Let's analyze the time complexity of this code. The primary factor that contributes to the time complexity is the nested loops that iterate over the elements of the `garbage` list.

Here's the breakdown of the code:

1. **First Loop (M):**
   - The first loop iterates over the elements of the `garbage` list and checks if "M" is in each element.
   - If "M" is found, it iterates over the characters in that element to count the occurrences of "M".
   - The time complexity of this loop is O(n * m), where n is the number of elements in `garbage` and m is the average length of the strings in `garbage`.

2. **Second Loop (P):**
   - The second loop is similar to the first one but for "P".
   - The time complexity is O(n * p), where p is the average length of the strings in `garbage`.

3. **Third Loop (G):**
   - The third loop is similar to the first two but for "G".
   - The time complexity is O(n * g), where g is the average length of the strings in `garbage`.

4. **Final Output Calculation:**
   - The final part of your code involves adding values based on the counts of "M", "P", and "G", as well as some additional values based on the `travel` list.
   - The operations involved in this part have a time complexity of O(n), where n is the length of the `travel` list.

Overall, the total time complexity of this code is dominated by the three nested loops, making it O(n * max(m, p, g)) where n is the number of elements in `garbage`, m is the average length of "M" strings, p is the average length of "P" strings, and g is the average length of "G" strings.

It's important to note that if the lengths of "M", "P", and "G" strings are roughly the same across the `garbage` list, you can simplify the expression to O(n * m), where m is the average length of the strings in `garbage`.
- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
Let's analyze the space complexity of the code:

1. **Variables:**
   - `m`, `p`, `g`, `index`, `output`: These are integer variables, and the space they occupy is constant. Therefore, they contribute O(1) to the space complexity.

2. **Iterators and Loop Variables:**
   - `i`, `w`, `c`: These variables are used in loops for iteration. They are local variables and don't contribute to space complexity outside their respective loops. Therefore, they contribute O(1) to the space complexity.

3. **Input Lists:**
   - `garbage` and `travel`: These are the input lists. The space they occupy is directly proportional to their lengths. Therefore, they contribute O(n) to the space complexity, where n is the length of the longer list between `garbage` and `travel`.

4. **Overall Space Complexity:**
   - The overall space complexity is the sum of the space complexities of individual components. Therefore, the space complexity of your code is O(n), where n is the length of the longer list between `garbage` and `travel`.

In summary, the space complexity of the code is linear, mainly due to the input lists (`garbage` and `travel`). The rest of the variables and iterators have constant space complexity.
# Code
```
class Solution:
    def garbageCollection(self, garbage: List[str], travel: List[int]) -> int:
        m = p = g = index = output = 0
        for i, w in enumerate(garbage):
            if "M" in w:
                for c in w:
                    if c == "M":
                        m = m + 1
                index = i
        if m != 0:
            output += m
            for i in range(index):
                output += travel[i]
        index = 0
        print(output)
        for i, w in enumerate(garbage):
            if "P" in w:
                for c in w:
                    if c == "P":
                        p = p + 1
                index = i
        if p != 0:
            output += p
            for i in range(index):
                output += travel[i]
        index = 0
        print(output)
        for i, w in enumerate(garbage):
            if "G" in w:
                for c in w:
                    if c == "G":
                        g = g + 1
                index = i
        if g != 0:
            output += g
            for i in range(index):
                output += travel[i]
        print(output)
        return output

```