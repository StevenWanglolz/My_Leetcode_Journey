# Approach

1. Reverse and then invert.

# Complexity

- Time complexity:
O(n2)

- Space complexity;
O(1)

# Code

```C++ []
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(auto &it: image){
            int i = 0;
            int j = image.size()-1;
            int temp = 0;
            while(i < j){
                temp = it[i];
                it[i] = it[j];
                it[j] = temp;
                i++;
                j--;
            }
        }
        for(int k = 0; k < image.size(); k++){
            for(int l = 0; l < image.size(); l++){
                if(image[k][l] == 1){
                    image[k][l] = 0;
                }
                else{
                    image[k][l] = 1;
                }
            }
        }
        return image;
    }
};
```
