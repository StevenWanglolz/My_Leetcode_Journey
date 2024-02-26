#include <map>
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        int count = 0;
        map<char, string> m;
        map<string, bool> m2;
        vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        for(int i = 0; i < 26; i++){ // * Map the alphabet
            m[char(i+97)] = morse[i];
        }
        for(auto w : words){
            string s = "";
            for(auto c : w){
                s += m[c];
            }
            auto it = m2.find(s);
            if(it == m2.end()){
                count++;
                m2[s] = true;
            }
        }
        return count;
    }
};