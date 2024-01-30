### *I did not solve this problem in time.*
### [Source](https://leetcode.com/problems/decode-the-message/solutions/2229844/easy-python-solution-using-hashing/)
- This is a classic case of mapping.
- ```if char not in mapping``` checks if the char is a key in the dictionary. It is used to check for duplicates in the list.
```Python []
class Solution:
    def decodeMessage(self, key: str, message: str) -> str:
        mapping = {' ': ' '}
        i = 0
        res = ''
        letters = 'abcdefghijklmnopqrstuvwxyz'
        
        for char in key:
            if char not in mapping:
                mapping[char] = letters[i]
                i += 1
        
        for char in message:
            res += mapping[char]
                
        return res
```