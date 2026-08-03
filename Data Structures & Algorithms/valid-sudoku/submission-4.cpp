class Solution {
public:
    bool repeated(vector <char> A)
    {
        if (A.size() > 1)
        {
            for (int i = 0; i < A.size(); ++i)
            {
                char a = A[i];
                for (int j = i+1; j < A.size(); ++j)
                {
                    if (A[j] == a)
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        bool Valid = 0;
        int y = 0;
        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < 3; ++j)
            {
                vector <char> A = {};
                vector <char> B = {};
                vector <char> C = {};
                char a;
                char b;
                char c;
                int x = 0;
                for (int k = 0; k < 3; ++k)
                {
                    for (int l = 0; l < 3; ++l)
                    {
                        a = board[3*i+k][3*j+l];
                        b = board[x][y];
                        c = board[y][x];
                        ++x;
                        if (a != '.')
                        {
                            A.push_back(a);
                        }
                        if (b != '.')
                        {
                            B.push_back(b);
                        }
                        if (c != '.')
                        {
                            C.push_back(c);
                        }
                    }
                }
                if (repeated(A) || repeated(B) || repeated(C))
                {
                    return false;
                }
                ++y;
            }
        }
        return true;
    }
};
