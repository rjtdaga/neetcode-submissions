class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int str_len = 0;
        int max_len = 0;
        string a = "";
        for (int i = 0; i < s.length(); ++i)
        {
            bool Found = 0;
            char b = s[i];
            for (int j = 0; j < str_len; ++j)
            {
                if (b == a[j])
                {
                    Found = 1;
                    string d = "";
                    for (int k = j+1; k < str_len; ++k)
                    {
                        char c = a[k];
                        d  = d + c;
                    }
                    a = d;
                    a = a + b;
                    str_len = a.length();
                    break;
                }
            }
            if (Found == 0)
            {
                a = a + b;
                str_len++;
                if (max_len < str_len)
                {
                    max_len = str_len;
                }
            }
            cout << b << " " << a << " " << str_len << endl;
        }
        cout << a << endl;
        return max_len;
    }
};
