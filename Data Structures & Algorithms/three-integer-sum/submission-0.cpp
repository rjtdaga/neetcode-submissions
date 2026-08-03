class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> A;
        for (int i = 0; i < nums.size(); ++i)
        {
            vector <int> dum = {};
            for (int j = i+1; j < nums.size(); ++j)
            {
                dum.push_back(nums[j]+nums[i]);
                for (int k = j+1; k < nums.size(); ++k)
                {
                    if (nums[k] == -dum[j-i-1])
                    {
                        vector <int> B;
                        B.push_back(nums[i]);
                        B.push_back(nums[j]);
                        B.push_back(nums[k]);
                        bool Found = 0;
                        for (int l = 0; l < A.size(); ++l)
                        {
                            if ((B[0]==A[l][0] && B[1]==A[l][1] && B[2]==A[l][2]) ||
                            (B[0]==A[l][1] && B[1]==A[l][0] && B[2]==A[l][2]) ||
                            (B[0]==A[l][2] && B[1]==A[l][1] && B[2]==A[l][0]) ||
                            (B[0]==A[l][0] && B[1]==A[l][2] && B[2]==A[l][1]) ||
                            (B[0]==A[l][1] && B[1]==A[l][2] && B[2]==A[l][0]) ||
                            (B[0]==A[l][2] && B[1]==A[l][0] && B[2]==A[l][1]))
                            {
                                Found = 1;
                            }
                        }
                        if (Found == 0){
                            A.push_back(B);
                        }
                    }
                }
            }
        }
        return A;
    }
};
