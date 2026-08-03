class Solution {
public:
    bool isValid(string s) {
        if (s.size()%2 != 0)
        {
            return false;
        }
        int A[s.size()] = {};
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == '(')
            {
                A[i] = 1;
            }
            else if (s[i] == ')')
            {
                A[i] = -1;
            }
            else if (s[i] == '{')
            {
                A[i] = 2;
            }
            else if (s[i] == '}')
            {
                A[i] = -2;
            }
            else if (s[i] == '[')
            {
                A[i] = 3;
            }
            else if (s[i] == ']')
            {
                A[i] = -3;
            }
        }
        int Char[s.size()/2];
        int m = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            if (A[i] > 0)
            {
                Char[m] = A[i];
                ++m;
            }
            else
            {
                --m;
                if (A[i] != -Char[m])
                {
                    return false;
                }
            }
        }
        if (m == 0)
            return true;
        else
            return false;

    }
};
