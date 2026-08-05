class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> prefix(nums.size(), 1);
        vector <int> suffix(nums.size(), 1);
        for (int i = 1; i < nums.size(); ++i){
            prefix[i] = prefix[i-1]*nums[i-1];
            suffix[nums.size()-i-1] = suffix[nums.size()-i]*nums[nums.size()-i];
        }
        vector <int> return_arr(nums.size(), 1);
        for (int i = 0; i < nums.size(); ++i){
            return_arr[i] = prefix[i]*suffix[i];
        }
        return return_arr ;
    }
};
