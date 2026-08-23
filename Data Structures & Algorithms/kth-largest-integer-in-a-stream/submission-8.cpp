class KthLargest {
public:
    int kth;
    std::priority_queue<int, std::vector<int>, std::greater<int>> min_pq;
    KthLargest(int k, vector<int>& nums) {
        kth = k;
        for (int i : nums){
            min_pq.push(i);
            if (min_pq.size() > kth)
                min_pq.pop();
        }
    }
    
    int add(int val) {
        min_pq.push(val);
        if (min_pq.size() > kth)
            min_pq.pop();
        return min_pq.top();
    }
};
