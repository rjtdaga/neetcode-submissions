class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices.at(0);
        int max_diff = 0;
        for (int i = 0; i < prices.size()-1; ++i)
        {
            if (prices[i] < min)
            {
                min = prices[i];
            }
            int max = prices[i+1];
            if (max-min > max_diff)
            {
                max_diff = max-min;
            }
            for (int j = i+2; j < prices.size(); ++j)
            {
                if (prices[j] > max)
                {
                    max = prices[j];
                }
                if (max-min > max_diff)
                {
                    max_diff = max-min;
                }
            }
        }
        return max_diff;
    }
};
