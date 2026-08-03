class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> A = {};
        int dum1[nums.size()] = {};
        int dum2[nums.size()] = {};
        for (int i = 0; i < nums.size(); ++i)
        {
            dum1[i] = 1;
            dum2[i] = 1;
        }
        for (int i = 1; i < nums.size(); ++i)
        {
            dum1[i] = dum1[i-1]*nums.at(i-1);
            dum2[nums.size()-i-1] = dum2[nums.size()-i]*nums.at(nums.size()-i);
        }
        for (int i = 0; i < nums.size(); ++i)
        {
            A.push_back(dum1[i]*dum2[i]);
        }
        return A;
    }
};
