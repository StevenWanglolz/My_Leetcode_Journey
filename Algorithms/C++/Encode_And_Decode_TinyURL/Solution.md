## [Original Post](https://leetcode.com/problems/encode-and-decode-tinyurl/solutions/1110551/js-python-java-c-easy-map-solution-w-explanation/)

## Explanation from ChatGPT

```cpp
class Solution {
public:
    unordered_map<string, string> codeDB, urlDB;
    const string chars = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
```

- This class named `Solution` contains two unordered maps (`codeDB` and `urlDB`) to store mappings between short codes and long URLs. It also has a constant string `chars` containing all digits and ASCII letters (both uppercase and lowercase). This will be used to generate random short codes.

```cpp
    string getCode() {
        string code = "";
        for (int i = 0; i < 6; i++) code += chars[rand() % 62];
        return "http://tinyurl.com/" + code;
    }
```

- The `getCode` method generates a random 6-character code by iterating six times and appending a random character from the `chars` string to the `code` variable. The `% 62` is used to ensure the random index is within the bounds of the `chars` string. The method then returns the complete URL by appending the generated code to "http://tinyurl.com/".

```cpp
    string encode(string longUrl) {
        if (urlDB.find(longUrl) != urlDB.end()) return urlDB[longUrl];
        string code = getCode();
        while (codeDB.find(code) != codeDB.end()) code = getCode();
        codeDB[code] = longUrl;
        urlDB[longUrl] = code;
        return code;
    }
```

- The `encode` method takes a long URL (`longUrl`) as input and returns a short code. If the long URL is already in `urlDB`, it immediately returns the corresponding short code. If not, it generates a new code using `getCode` and ensures it's unique by checking if it already exists in `codeDB`. Once a unique code is obtained, it updates both `codeDB` and `urlDB` with the new mapping and returns the generated code.

```cpp
    string decode(string shortUrl) {
        return codeDB[shortUrl];
    }
};
```

- The `decode` method takes a short URL (`shortUrl`) and returns the corresponding long URL by looking up the short code in `codeDB`.

It's worth noting that this code uses the C++ standard library's `unordered_map` for mapping between short codes and long URLs, and it uses the `rand()` function to generate random indices for selecting characters from the `chars` string. In practice, using `rand()` for cryptographic purposes or in scenarios where high-quality randomness is required is discouraged. A more modern approach would be to use the `<random>` header and a proper random number generator.