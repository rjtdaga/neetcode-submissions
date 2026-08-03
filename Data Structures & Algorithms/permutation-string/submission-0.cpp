class Solution {
public:
    bool isPermutation(string a1, string a2)
    {
        if (a1.length() != a2.length())
        {
            return false;
        }
        else
        {
            int Freq1[26];
            int Freq2[26];
            for (int i = 0; i < 26; ++i)
            {
                Freq1[i] = 0; 
                Freq2[i] = 0;
            }
            for (int i = 0; i < a1.length(); ++i)
            {
                ++Freq1[a1[i]-'a'];
                ++Freq2[a2[i]-'a'];
            }
            for (int i = 0; i < 26; ++i)
            {
                if (Freq1[i] != Freq2[i])
                    return false;
            }
            return true;
        }
    }
    bool checkInclusion(string s1, string s2) {
        for (int i = 0; i < s1.length(); ++i)
        {
            char start = s1[i];
            for (int j = 0; j < s2.length(); ++j)
            {
                if (s2[j] == start)
                {
                    string a = "";
                    for (int k = 0; k < s1.length(); ++k)
                    {
                        char b = s2[j+k];
                        a = a + b;
                    }
                    if (isPermutation(a, s1))
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
