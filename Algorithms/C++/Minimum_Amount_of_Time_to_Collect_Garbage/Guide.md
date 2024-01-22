# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
I thought of three for loops to go through metal, paper, and glass.
# Approach
<!-- Describe your approach to solving the problem. -->
1. Create the varaibles necessary, e.g., the amount of m, p, and g, the index of the last house, and the output.  
   
2. The outer loop goes through the entire list.  
   
3. The inner loop goes throught the character of each string, and checks the amount of matching characters.  
   
4. For the time required to commute between houses, I only note the last index, and iterate through the list of time required.  
   
5. Finally, add the numbers to output after each loop and repeat this process three times.
# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
Let's analyze the time complexity of the code:

1. **First Loop (M):**
   - The first loop iterates over the elements of the `garbage` vector and checks each character in each string.
   - The time complexity of this loop is O(n * m), where n is the number of elements in `garbage` and m is the average length of the strings in `garbage`.

2. **Second Loop (P):**
   - The second loop is similar to the first one but for "P".
   - The time complexity is O(n * p), where p is the average length of the strings in `garbage`.

3. **Third Loop (G):**
   - The third loop is similar to the first two but for "G".
   - The time complexity is O(n * g), where g is the average length of the strings in `garbage`.

4. **Final Output Calculation:**
   - The final part of your code involves adding values based on the counts of "M", "P", and "G", as well as some additional values based on the `travel` vector.
   - The operations involved in this part have a time complexity of O(n), where n is the length of the `travel` vector.

5. **Overall Time Complexity:**
   - The dominant factor is the first set of loops, so the overall time complexity is O(n * max(m, p, g)), where n is the number of elements in `garbage`, m is the average length of "M" strings, p is the average length of "P" strings, and g is the average length of "G" strings.

It's important to note that if the lengths of "M", "P", and "G" strings are roughly the same across the `garbage` vector, you can simplify the expression to O(n * m), where m is the average length of the strings in `garbage`.
- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
Let's analyze the space complexity of the code:

1. **Variables:**
   - `m`, `p`, `g`, `index`, `output`, `count`: These are integer variables, and the space they occupy is constant. Therefore, they contribute O(1) to the space complexity.

2. **Iterators and Loop Variables:**
   - `it`, `it2`: These variables are iterators used in loops. They are local variables and don't contribute to space complexity outside their respective loops. Therefore, they contribute O(1) to the space complexity.

3. **Input Vectors:**
   - `garbage` and `travel`: These are the input vectors. The space they occupy is directly proportional to their lengths. Therefore, they contribute O(n) to the space complexity, where n is the length of the longer vector between `garbage` and `travel`.

4. **Overall Space Complexity:**
   - The overall space complexity is the sum of the space complexities of individual components. Therefore, the space complexity of your code is O(n), where n is the length of the longer vector between `garbage` and `travel`.

In summary, the space complexity of your code is linear, mainly due to the input vectors (`garbage` and `travel`). The rest of the variables and iterators have constant space complexity.
# Code
```
class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int m, p, g, index, output, count;
        m = p = g = index = output = count = 0;
        for(auto it = garbage.begin(); it != garbage.end(); ++it){
            for(auto it2 = it->begin(); it2 != it->end(); ++it2){
                if(*it2 == 'M'){
                    m++;
                    index = count;
                }
            }
            count++;
        }
        if(m != 0){
                for(int i =  0; i < index; i ++){
                    output += travel[i];
                }
        }
        output += m;
        count = 0;
        for(auto it = garbage.begin(); it != garbage.end(); ++it){
            // cout << *it << endl;
            for(auto it2 = it->begin(); it2 != it->end(); ++it2){
                if(*it2 == 'P'){
                    p++;
                    index = count;
                }
            }
            count++;
        }   
        if(p != 0){
                for(int i =  0; i < index; i ++){
                    output += travel[i];
                }
        }
        output += p;
        count = 0;
        for(auto it = garbage.begin(); it != garbage.end(); ++it){
            // cout << *it << endl;
            for(auto it2 = it->begin(); it2 != it->end(); ++it2){
                if(*it2 == 'G'){
                    g++;
                    index = count;
                }
            }
            count++;
        }
        if(g != 0){
                for(int i =  0; i < index; i ++){
                    output += travel[i];
                }
        }
        output += g;
        return output;
    }
};
```