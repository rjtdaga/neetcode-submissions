class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector <unordered_map<int, int>> map;
        for (int i = 0; i < strs.size(); ++i){
            map.push_back(GenerateHash(strs[i]));
        }
        vector<vector<string>> ret_str;
        vector <unordered_map <int, int>> ret_map;
        vector <string> A;
        A.push_back(strs[0]);
        ret_str.push_back(A);
        ret_map.push_back(map[0]);
        for (int i = 1; i < strs.size(); ++i){
            bool Found = 0;
            for (int k = 0; k < ret_map.size(); ++k){
                if (ret_map[k] == map[i]){
                    ret_str[k].push_back(strs[i]);
                    Found = 1;
                }
            }
            if (Found == 0){
                ret_map.push_back(map[i]);
                vector <string> B;
                B.push_back(strs[i]);
                ret_str.push_back(B);
            }
        }
        return ret_str;
    }
    unordered_map<int, int> GenerateHash(string t){
        unordered_map<int, int> map;
        for (int i = 0; i < t.size(); ++i){
            map[t[i]-'a']++;
        }
        return map;
    }
};
