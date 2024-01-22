# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
1. Iterate through the list and tokenize each sentence.
2. Count how many spaces are in the sentence and add 1 to that number to get the number of words
# Approach
<!-- Describe your approach to solving the problem. -->
1. Create an integer to store the maximum number of words and a count to count how many spaces are in the sentence.
2. Initiate count to 1 and max to 0.  
   
3. Iterate through the list.  
   
4. Iterate through each sentence.  
   
5. Use if(character == ' ') to determine if it's a space. Remember to use single quotation marks, as it is a char not a string.  
   
6. Compare count with max after each iteration of a sentence.
# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
1. **Outer Loop:**
   - The outer loop iterates through each sentence in the vector `sentences`. Let `n` be the number of sentences. The time complexity of the outer loop is O(n).

2. **Inner Loop:**
   - The inner loop iterates through each character in the current sentence. Let `m` be the average length of a sentence. The time complexity of the inner loop is O(m).

3. **Overall Time Complexity:**
   - Since the inner loop is nested inside the outer loop, the overall time complexity is O(n * m).

The dominant term in this case is the product of the number of sentences and the average length of a sentence. Therefore, the time complexity of this algorithm is O(n * m).
- Space complexity:
1. **Input Space:**
   - The primary input is the vector of strings `sentences`. The space complexity for the input is O(n * m), where n is the number of sentences in the vector, and m is the average length of a sentence.

2. **Loop Variables:**
   - The loop variables include the iterator `it` and the integer variable `count`. These contribute O(1) space complexity.

3. **Integer Variables:**
   - The integer variable `max` is used to store the maximum count. It contributes O(1) space complexity.

Combining these factors, the overall space complexity of your algorithm is O(n * m + 2), where n is the number of sentences, m is the average length of a sentence, and the "+ 2" represents the space for the two integer variables `count` and `max`.

The dominant term in this case is the size of the input vector `sentences`, so the space complexity is primarily determined by the input size. The loop variables and the integer variables contribute constant space.

# Code
```
#include <string>

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max = 0;
        int count;
        for(auto it = sentences.begin(); it != sentences.end(); ++it){
            count = 1;
            for(auto s : *it){
                //cout << s << endl;
                if(s == ' '){
                    count++;
                }
            }
            if(count > max){
                max = count;
            }
        } 
        return max;
    }
};
```