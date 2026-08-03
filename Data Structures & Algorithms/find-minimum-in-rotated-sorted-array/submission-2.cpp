class Solution {
public:
    int findMin(vector<int> &nums) {
        if (nums[0] <= nums[nums.size()-1])
        {
            return nums[0];
        }
        int cut = -1;
        for (int i = 1; i < nums.size(); ++i)
        {
            if (nums[i] < nums[i-1])
            {
                cut = i;
            }
        }
        return nums[cut];
    }
};
