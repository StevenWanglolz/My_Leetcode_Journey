class Solution
{
public:
    int numberOfBeams(vector<string> &bank){
        int m = bank.size();
        int n = bank[0].size();
        int a, b, output = 0;
        vector<int> v;
        for (int i = 0; i < m; i++){
            if (bank[i].find('1') != string::npos){
                v.push_back(i); // * Keep track of the indices
            }
        }
        if (!v.empty()){
            for (int i = 0; i < v.size() - 1; i++){
                a = 0;
                b = 0;
                for (int j = 0; j < n; j++){
                    if (bank[v[i]][j] == '1'){
                        a++;
                    }
                }
                for (int k = 0; k < n; k++){
                    if (bank[v[i + 1]][k] == '1'){
                        b++;
                    }
                }
                output += a * b;
            }
        }
        else{
            return output;
        }
        cout << output << endl;
        return output;
    }
};
