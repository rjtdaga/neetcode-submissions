class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt = 0;
        for (int i = 31; i >= 0; i--) {
            int bit = (n >> i) & 1;
            if (bit == 1)
                cnt++;
        }
        return cnt;
    }
};
