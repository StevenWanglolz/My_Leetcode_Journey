# Approach
<!-- Describe your approach to solving the problem. -->
Create a sublist starting with index + 1 to check if there is a reverse pair in the rest of the list.

# Complexity

- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
1. **isElementInList Function:**
   - The `isElementInList` function iterates through the vector `v` to check if the string `s` is present. In the worst case, it needs to iterate through the entire vector.
   - The time complexity of this function is O(len(v)), where len(v) is the length of the vector `v` passed as an argument.

2. **reverse Function:**
   - The `reverse` function iterates through half of the characters in the string `s`. Therefore, its time complexity is O(len(s)/2), which simplifies to O(len(s)).

3. **maximumNumberOfStringPairs Function:**
   - The function has two nested loops:
      - The outer loop iterates over each element in the vector `words`, contributing O(len(words)) to the time complexity.
      - The inner loop creates a new vector `v` by slicing the remaining elements, contributing O(len(words)) to the time complexity.
   - The `isElementInList` function is called inside the inner loop, and its time complexity is O(len(v)), where len(v) is the length of the vector `v`.
   - The `reverse` function is also called inside the inner loop with a string from `words`, and its time complexity is O(len(words[i])).
   - Therefore, the overall time complexity is O(len(words) * (len(words) + len(v) + len(words[i]))), where len(v) and len(words[i]) can be at most len(words).

4. **Overall Time Complexity:**
   - The dominant factor in the time complexity is the outer loop, so the overall time complexity is O(len(words) * len(words)).

In summary, the overall time complexity is quadratic, O(len(words)^2), due to the nested loops over the vector `words`.

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
Let's analyze the space complexity of the provided C++ code:

1. **isElementInList Function:**
   - Within the function, a copy of the vector `v` is made. However, since it's passed by value, it's a separate copy, and its space complexity is O(len(v)).

2. **reverse Function:**
   - The `reverse` function creates a copy of the input string `s` and then modifies it. Therefore, its space complexity is also O(len(s)).

3. **maximumNumberOfStringPairs Function:**
   - Inside the function, a new vector `v` is created in each iteration by slicing the remaining elements of the `words` vector. The space complexity of this vector depends on the number of remaining elements and can be at most O(len(words)).
   - The space complexity of other variables such as `count` is constant and negligible.

4. **Overall Space Complexity:**
   - The overall space complexity is determined by the space required for the variables used in the function.
   - The dominant factors contributing to space complexity are the vectors `v` created in each iteration of the loop in the `maximumNumberOfStringPairs` function and the copies of strings made in the `isElementInList` and `reverse` functions.
   - Therefore, the overall space complexity is O(len(words)) in the worst case due to the creation of new vectors `v`.

# Code

```C++ []
class Solution {
public:
    bool isElementInList(vector<string> v, string s){
        for(auto it : v){
            if(it == s){
                return true;
            }
        }
        return false;
    }

    string reverse(string s){
        int length = s.length();
        string reverse = s;
        for(int i = 0; i < length/2; i++){
            swap(reverse[i], reverse[length-i-1]);
        }   
        return reverse;
    }

    int maximumNumberOfStringPairs(vector<string>& words) {
        int count = 0;
        for(int i = 0; i < words.size(); i++){
            auto start = words.begin()+i+1;
            auto end = words.end();
            vector<string> v(start, end);
            if(isElementInList(v, reverse(words[i]))){
                count++;
            }
        }
        return count;
    }
};
```
