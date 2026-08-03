class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector <int> A;
        int dummy;
        dummy = nums.at(0);
        A.push_back(dummy);
        for (int i = 1; i < nums.size(); ++i)
        {
            int a = nums.at(i);
            bool Found = 0;
            for (int j = 0; j < A.size(); ++j)
            {
                int dum;
                dum = A.at(j);
                if (dum == a)
                {
                    Found = 1;
                    break;
                }
            }
            if (Found == 0)
            {
                A.push_back(a);
            }
        }
        int Freq[A.size()] = {};
        for (int i = 0; i < nums.size(); ++i)
        {
            for (int j = 0; j < A.size(); ++j)
            {
                if (A.at(j) == nums.at(i))
                {
                    Freq[j]++;
                    break;
                }
            }
        }
        vector <int> Ord = {};
        Ord.push_back(0);
        for (int i = 1; i < A.size(); ++i)
        {
            bool inserted = 0;
            for (int j = 0; j < i; ++j)
            {
                if (Freq[i] > Freq[Ord.at(j)])
                {
                    Ord.insert(Ord.begin() + j,i);
                    inserted = 1;
                    break;
                }
            }
            if (inserted == 0)
            {
                Ord.insert(Ord.begin() + i,i);
            }
        }
        vector <int> Ind;
        for (int i = 0; i < k; ++i)
        {
            Ind.push_back(A.at(Ord.at(i)));
        }
        return Ind;
    }
};
