#include <typeinfo>

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