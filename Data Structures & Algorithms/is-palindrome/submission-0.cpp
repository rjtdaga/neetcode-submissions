class Solution {
public:
    bool isPalindrome(string s) {
        string a;
        for (int i = 0; i < s.length(); ++i)
        {
            char b = tolower(s[i]);
            if (isalnum(s[i]))
                a = a + b; 
        }
        if (a.length()%2 == 0)
        {
            for (int i = 0; i < a.length()/2; ++i)
            {
                if (a[i] != a[a.length()-i-1])
                {
                    return false;
                }
            }
        }
        else
        {
            for (int i = 0; i < (a.length()-1)/2; ++i)
            {
                if (a[i] != a[a.length()-i-1])
                {
                    return false;
                }
            }
        }
        return true;
    }
};
