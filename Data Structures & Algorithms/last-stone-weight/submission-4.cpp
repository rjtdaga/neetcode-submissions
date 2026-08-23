class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        std::priority_queue<int> pq;
        for (int i : stones){
            pq.push(i);
        }
        while (pq.size() > 1){
            int stone1 = pq.top();
            pq.pop();
            int stone2 = pq.top();
            if (stone1 > stone2){
                pq.pop();
                pq.push(stone1-stone2);
            }
            else{
                pq.pop();
                pq.push(stone2-stone1);
            }
        }
        return pq.top();
    }
};
