def can_eat(rate, piles, hour):
    N = len(piles)
    time = 0
    for i in range(N):
        if piles[i]%rate == 0:
            time += int(piles[i]/rate)
        else:
            time += int(piles[i]/rate)
            time += 1 # To finish the remainder
    if time <= hour:
        return True
    else:
        return False
class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        sort_piles = piles
        sort_piles.sort()
        N = len(sort_piles)
        if h < N:
            return None
        rate1 = 1
        if can_eat(rate1, piles, h):
            return rate1
        rate2 = max(piles)
        while rate2-rate1>1:
            rate = int((rate1 + rate2)/2)
            if can_eat(rate, piles, h):
                rate2 = rate
            else:
                rate1 = rate
        return rate2
        