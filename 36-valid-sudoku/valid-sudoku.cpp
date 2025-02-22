class Solution {
public:
    bool check(int r, int c, vector<vector<char>>& board) {
        int rs = 3 * r;
        int cs = 3 * c;
        map<char, int> mpp;
        for (int i = rs; i < rs + 3; i++) {
            for (int j = cs; j < cs + 3; j++) {
                if (board[i][j] != '.' && mpp.find(board[i][j]) != mpp.end())
                    return false;
                else if (board[i][j] != '.')
                    mpp[board[i][j]]++;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    for (int k = 0; k < 9; k++) {
                        if (board[i][k] == board[i][j] && k != j)
                            return false;
                        if (board[k][j] == board[i][j] && i != k)
                            return false;
                    }
                }
            }
        }
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (!check(i, j, board))
                    return false;
            }
        }
        return true;
    }
};