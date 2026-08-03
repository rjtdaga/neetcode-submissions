class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
        {
            return false;
        }
        cout << "Same length" << endl;
        char alphabetChar = 'a';
        cout << "Hi" << endl;
        int base = static_cast<int>(alphabetChar);
        cout << "Hi2" << endl;
        int NumChar[26][2] = {};
        for (int i = 0; i < s.length(); ++i)
        {
            cout << static_cast<int>(s[i])-base << endl;
            NumChar[static_cast<int>(s[i])-base][0]++;
        }
        for (int i = 0; i < s.length(); ++i)
        {
            NumChar[static_cast<int>(t[i])-base][1]++;
        }
        for (int k = 0; k < 26; ++k)
        {
            if (NumChar[k][0] != NumChar[k][1])
            {
                return false;
            }
        }
        return true;
    }
};
