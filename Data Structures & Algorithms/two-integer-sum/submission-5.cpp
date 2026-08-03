class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       bool Found = false;
       vector <int> A{};
       for (int i = 0; i < nums.size(); ++i)
       {
           for (int j = i+1; j < nums.size(); ++j)
           {
                if (nums.at(i)+nums.at(j) == target)
                {
                    Found = true;
                    A.push_back(i);
                    A.push_back(j);
                    break;
                }
           }
           if (Found == true)
           {
                break;
           }
       }
       return A;
    }
};
