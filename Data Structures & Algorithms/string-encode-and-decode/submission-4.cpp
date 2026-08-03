class Solution {
public:

    string encode(vector<string>& strs) {
        string A = "";
        for (int i = 0; i < strs.size(); ++i)
        {
            string invalid_utf8 = "\x03";
            A = A + strs.at(i);
            A = A + invalid_utf8; 
        }
        return A;
    }

    vector<string> decode(string s) {
        vector <string> A;
        string a = "";
        for (int i = 0; i < s.length(); ++i)
        {
            const char dum = '\x03';
            if (s[i] == dum)
            {
                A.push_back(a);
                a = "";
            }
            else
            {
                a = a + s[i];
            }
        }
        return A;
    }
};
