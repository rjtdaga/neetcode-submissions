import math
class Solution:
    def hammingWeight(self, n: int) -> int:
        dummy = n
        num_ones = 0
        while dummy > 0:
            power = int(math.log2(dummy))
            dummy -= 2**power
            num_ones += 1
        return num_ones