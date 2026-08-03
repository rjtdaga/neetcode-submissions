class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 1)
            return 1;
        unordered_set <int> myHashSet = {};
        for (int i = 0; i < nums.size(); ++i)
        {
            myHashSet.insert(nums.at(i));
        }
        vector <int> start = {};
        for (int i = 0; i < nums.size(); ++i)
        {
            if (myHashSet.find(nums.at(i)-1) == myHashSet.end())
            {
                start.push_back(nums.at(i));
            }
        }
        int Max = 1;
        while (start.size() > 0)
        {
            int len = start.size();
            vector <int> remove = {};
            for (int i = 0; i < len; ++i)
            {
                if (myHashSet.find(start.at(i)+Max) == myHashSet.end())
                {
                    remove.push_back(i);
                }
            }
            for (int i = remove.size()-1; i >= 0; --i)
            {
                start.erase(start.begin()+remove[i]);
            }
            ++Max;
        }
        return Max-1;
    }
};
