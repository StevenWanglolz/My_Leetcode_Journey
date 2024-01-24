[Source](https://leetcode.com/problems/split-a-string-in-balanced-strings/solutions/403836/c-java-python-easy-solution/)
# Solution
Greedily split the string, and with the counting
L +1
R -1

when the counter is reset to 0, we get one balanced string.
# Code
```
int balancedStringSplit(string s) {
    int res = 0, cnt = 0;
    for (const auto& c : s) {
        cnt += c == 'L' ? 1 : -1;
        if (cnt == 0) ++res;
    }
    return res;        
}
```
