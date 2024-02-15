class SubrectangleQueries {

public:
    vector<vector<int>> m; // * Initialize matrix

    SubrectangleQueries(vector<vector<int>>& rectangle) {
        int r = rectangle.size();
        int c = rectangle[0].size();
        m = vector<vector<int>>(r, vector<int>(c, 0)); // * Initialize matrix
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                m[i][j] = rectangle[i][j];
            }
        }
    }
    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        for(int i = row1; i < row2+1; i++){
            for(int j = col1; j < col2+1; j++){
                this->m[i][j] = newValue;
            }
        }
    }
    
    int getValue(int row, int col) {
        return this->m[row][col];
    }
};
