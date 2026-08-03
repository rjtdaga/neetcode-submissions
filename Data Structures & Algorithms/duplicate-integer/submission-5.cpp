class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        vector <int> Dict;
        if (nums.size() < 2)
        {   
            return false;
        }
        Dict.push_back(nums.at(0));
        for (int i = 1; i < nums.size(); ++i)
        {
            int len = Dict.size();
            for (int j = 0; j < len; ++j)
            {
                if (nums.at(i) == Dict.at(j))
                {
                    return true;
                }
            }
            Dict.push_back(nums.at(i));
        }
        return false;
    }
};
