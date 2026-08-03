#include <unordered_map>
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()){
            return false;
        }
        std::unordered_map<int, int> map_s;
        std::unordered_map<int, int> map_t;
        
        for (int i = 0; i < s.size(); ++i){
            map_s[s[i]-'a']++;
            map_t[t[i]-'a']++;
        }
        if (map_s == map_t){
            return true;
        }
        return false;
    }
};
