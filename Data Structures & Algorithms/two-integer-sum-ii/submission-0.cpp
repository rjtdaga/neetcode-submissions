class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector <int> Ind = {};
        bool Found = 0;
        int start = 0;
        int end = numbers.size()-1;
        while (!Found)
        {
            if (numbers[start]+numbers[end] > target)
            {
                end--;
            }
            if (numbers[start]+numbers[end] < target)
            {
                start++;
            }
            if (numbers[start]+numbers[end] == target)
            {
                Ind.push_back(start+1);
                Ind.push_back(end+1);
                Found = 1;
            }
        }
        return Ind;
    }
};
