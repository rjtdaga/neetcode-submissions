class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map <int, int> hash_nums;
        int res = 0;
        for (int i : nums){
            if (!hash_nums[i]){
                hash_nums[i] = hash_nums[i-1] + hash_nums[i+1]+1;
                hash_nums[i-hash_nums[i-1]] = hash_nums[i];
                hash_nums[i+hash_nums[i+1]] = hash_nums[i];
                res = max(res, hash_nums[i]);
            }
        }
        return res;
    }
};
