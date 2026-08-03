class Solution {
public:
    int maxArea(vector<int>& heights) {
        int start = 0;
        int end = heights.size()-1;
        int Area = min(heights[start], heights[end])*(end - start);
        for (int i = 0; i < heights.size()-2; ++i)
        {
            cout << heights[start] << " " << heights[end] << endl;
            if (start == end)
            {
                break;
            }
            if (heights[start] > heights[end])
            {
                end--;
            }
            else if (heights[start] < heights[end])
            {
                start++;
            }
            else if (heights[start] == heights[end])
            {
                if (heights[start+1] > heights[end]-1)
                {
                    start++;
                }
                else if (heights[start+1] <= heights[end]-1)
                {
                    end--;
                }
            }
            if (Area < min(heights[start], heights[end])*(end - start))
            {
                Area = min(heights[start], heights[end])*(end - start);
            }
        }
        return Area;
    }
};
