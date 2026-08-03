class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       bool Found = false;
       int i = 0;
       vector <int> A{};
       while (Found == false)
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
           ++i; 
       }
       return A;
    }
};
