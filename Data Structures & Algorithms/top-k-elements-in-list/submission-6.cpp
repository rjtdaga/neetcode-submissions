class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> int_map;
        vector <vector<int>> freq(nums.size()+1);
        for (int i : nums){
            int_map[i]++;
        }
        for (const auto& n:int_map){
            freq[n.second].push_back(n.first);
        }
        vector <int> req_ser;
        for (int n = freq.size()-1; n > 0; n--){
            for (int m:freq[n]){
                req_ser.push_back(m);
                if (req_ser.size()==k){
                    return req_ser;
                }
            }
        }
        return req_ser;
    }
};
