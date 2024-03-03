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