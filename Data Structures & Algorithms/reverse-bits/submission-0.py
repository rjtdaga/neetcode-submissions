import math
class Solution:
    def reverseBits(self, n: int) -> int:
        rev_bit = [0]*32
        dummy = n
        while dummy > 0:
            power = int(math.log2(dummy))
            rev_bit[power] = 1
            dummy -= 2**power
        rev_number = 0
        for i in range(32):
            rev_number += rev_bit[32-i-1]*2**i
        return rev_number