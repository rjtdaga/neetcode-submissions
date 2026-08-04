class Solution {
public:

    string encode(vector<string>& strs) {
        string s = to_string(strs.size()) + "_";
        for (string i:strs){
            s += to_string(i.size()) + "_";
            s += i;
        }
        cout << s << endl;
        return s;
    }

    vector<string> decode(string s) {
        // Find 1st instance of "_"
        string a(1,s[0]);
        int i = 1;
        while (s[i] != '_'){
            a += s[i];
            ++i;
        }
        ++i;
        vector <string> req_str;
        for (int j = 0; j < stoi(a); ++j){
            string b(1,s[i]);
            ++i;
            while (s[i] != '_'){
                b += s[i];
                ++i;
            }
            ++i;
            cout << b << endl;
            string c = s.substr(i, stoi(b));
            i += stoi(b);
            req_str.push_back(c);
        }
        return req_str;
    }
};
