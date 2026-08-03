import math
class Solution:
    def countBits(self, n: int) -> List[int]:
        num_ones = [0]*(n+1)
        for num in range(n+1):
            # Find the number of ones in the binary representation
            dummy = num
            while dummy > 0:
                power = int(math.log2(dummy))
                num_ones[num] += 1
                dummy = dummy - 2**power
        return num_ones