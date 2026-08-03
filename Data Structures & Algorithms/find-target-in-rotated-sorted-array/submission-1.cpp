class Solution {
public:
    int search(vector<int>& nums, int target) {
        int cut = 0;
        for (int i = 1; i < nums.size(); ++i)
        {
            if (nums[i] < nums[i-1])
            {
                cut = i;
            }
        }
        if (cut == 0)
        {
            for (int i = cut; i < nums.size(); ++i)
            {
                if (nums[i] == target)
                {
                    return i;
                }
            }
            return -1;
        }
        if (nums[cut] <= target && nums[nums.size()-1]>=target)
        {
            // Search in other half i to nums.size()
            for (int i = cut; i < nums.size(); ++i)
            {
                if (nums[i] == target)
                {
                    return i;
                }
            }
            return -1;
        }
        else if (nums[0]<=target && nums[cut-1]>=target)
        {
            // Search in 0 to i-1 half
            for (int i = 0; i < cut; ++i)
            {
                if (nums[i] == target)
                {
                    return i;
                }
            }
            return -1;
        }
        return -1;
    }
};
