class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        max_diff = 0
        ind1 = 0
        ind2 = 1
        while ind2 < len(prices):
            if prices[ind2] > prices[ind1]:
                max_diff = max(max_diff, prices[ind2]-prices[ind1])
            else:
                ind1=ind2
            ind2+=1
        return max_diff

        