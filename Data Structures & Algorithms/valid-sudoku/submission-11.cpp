class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // Iterating through row and column
        for (int i = 0; i < 9; ++i){
            unordered_map <int, int> row;
            unordered_map <int, int> col;
            unordered_map <int, int> square;
            for (int j = 0; j < 9; ++j){
                row[board[i][j]-'0']++;
                col[board[j][i]-'0']++;
                square[board[(i/3)*3 + j/3][(i%3)*3 + j%3]-'0']++;
            }
            for (int j = 1; j < 10; ++j){
                if (row[j] > 1 || col[j]>1 || square[j]>1){
                    cout << j << " Row: " << row[j] << " Col: " << col[j] << " Square: " << square[j] << endl;
                    return false;
                }
            }
        }
        return true;
    }
};
