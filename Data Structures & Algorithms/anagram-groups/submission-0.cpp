class Solution {
public:
    bool isanagram(string A, string B)
    {
        if (A.length() != B.length())
        {
            return false;
        }
        int len = A.length();
        int Num[26][2] = {};
        int base = static_cast<int>('a');
        for (int i = 0; i < A.length(); ++i)
        {
            Num[static_cast<int>(A.at(i)-base)][0]++;
            Num[static_cast<int>(B.at(i)-base)][1]++;
        }
        for (int k = 0; k < 26; ++k)
        {
            if (Num[k][0] != Num[k][1])
            {
                return false;
            }
        }
        return true;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int NumWords = strs.size();
        vector <vector <string>> Order = {};
        vector <string> A = {};
        A.push_back(strs.at(0));
        Order.push_back(A);
        for (int i = 1; i < NumWords; ++i)
        {
            bool Already = 0;
            cout << i << endl;
            for (int j = 0; j < Order.size(); ++j)
            {
                vector <string> *C = &Order.at(j);
                if (isanagram(C->at(0), strs.at(i)))
                {
                    C->push_back(strs.at(i));
                    Already = 1;
                }
            }
            if (Already == 0)
            {
                vector <string> C = {};
                C.push_back(strs.at(i));
                Order.push_back(C);
            }
        }
        return Order;
    }
};
