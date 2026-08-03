class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int NumInt = intervals.size();
        bool between[2] = {};
        int inter[2];
        vector <vector <int>> Final;
        if (intervals.size() == 0)
        {
            Final.push_back(newInterval);
            return Final;
        }
        if (newInterval[1] < intervals[0][0])
        {
            Final.push_back(newInterval);
            for (int i = 0; i < NumInt; ++i)
            {
                Final.push_back(intervals[i]);
            }
            return Final;
        }
        if (newInterval[0] > intervals[NumInt-1][1])
        {
            for (int i = 0; i < NumInt; ++i)
            {
                Final.push_back(intervals[i]);
            }
            Final.push_back(newInterval);
            return Final;
        }
        if (newInterval[0] < intervals[0][0] && newInterval[1] > intervals[NumInt-1][1])
        {
            Final.push_back(newInterval);
            return Final;
        }
        if (newInterval[0] < intervals[0][0])
        {
            between[0] = 0;
            inter[0] = 0;
        }
        for (int i = 0; i < NumInt; ++i)
        {
            for (int j = 0; j < 2; ++j)
            {
                if (newInterval[j] <= intervals[i][1] && 
                newInterval[j] >= intervals[i][0])
                {
                    between[j] = 1;
                    inter[j] = i;
                }
                if (i < NumInt-1)
                {
                    if (newInterval[j] < intervals[i+1][0] && 
                    newInterval[j] > intervals[i][1])
                    {
                        between[j] = 0;
                        inter[j] = i;
                    }
                }
            }
        }
        cout << between[0] << " " << between[1] << " " << inter[0] << " " << inter[1] << endl;
        if (between[0] == 1 && between[1] == 1)
        {
            cout << inter[0] << " " << inter[1] << endl;
            for (int i = 0; i < inter[0]; ++i)
            {
                Final.push_back(intervals[i]);
            }
            vector <int> interv = {};
            interv.push_back(intervals[inter[0]][0]);
            interv.push_back(intervals[inter[1]][1]);
            Final.push_back(interv);
            for (int i = inter[1]+1; i < NumInt; ++i)
            {
                Final.push_back(intervals[i]);
            }
        }
        else if (between[0] == 1 && between[1] == 0)
        {
            for (int i = 0; i < inter[0]; ++i)
            {
                Final.push_back(intervals[i]);
            }
            vector <int> interv = {};
            interv.push_back(intervals[inter[0]][0]);
            interv.push_back(newInterval[1]);
            Final.push_back(interv);
            for (int i = inter[1]+1; i < NumInt; ++i)
            {
                Final.push_back(intervals[i]);
            }
        }
        else if (between[0] == 0 && between[1] == 1)
        {
            for (int i = 0; i < inter[0]; ++i)
            {
                Final.push_back(intervals[i]);
            }
            vector <int> interv = {};
            interv.push_back(newInterval[0]);
            interv.push_back(intervals[inter[1]][1]);
            Final.push_back(interv);
            for (int i = inter[1]+1; i < NumInt; ++i)
            {
                Final.push_back(intervals[i]);
            }
        }
        else if (between[0] == 0 && between[1] == 0)
        {
            for (int i = 0; i <= inter[0]; ++i)
            {
                Final.push_back(intervals[i]);
            }
            vector <int> interv = {};
            interv.push_back(newInterval[0]);
            interv.push_back(newInterval[1]);
            Final.push_back(interv);
            for (int i = inter[1]+1; i < NumInt; ++i)
            {
                Final.push_back(intervals[i]);
            }
        }
        return Final;
    }
};
