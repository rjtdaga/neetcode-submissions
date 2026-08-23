class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        std::priority_queue<int, std::vector<int>, std::greater<int>> min_pq;
        for (int i : nums){
            min_pq.push(i);
            if (min_pq.size() > k){
                min_pq.pop();
            }
        }
        return min_pq.top();
    }
};
