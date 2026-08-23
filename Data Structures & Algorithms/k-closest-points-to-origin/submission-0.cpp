class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ret;
        std::priority_queue<int, std::vector<int>, std::greater<int>> sorted_dist;
        unordered_map <int, vector<vector<int>>> pts_map;
        for (vector<int> pts : points){
            int dist = pts[0]*pts[0] + pts[1]*pts[1];
            sorted_dist.push(dist);
            pts_map[dist].push_back(pts);
        }
        for (int i = 0; i < k; ++i){
            int dist = sorted_dist.top();
            sorted_dist.pop();
            ret.push_back(pts_map[dist][0]);
            pts_map[dist].erase(pts_map[dist].begin());
        }
        return ret;
    }
    
};
