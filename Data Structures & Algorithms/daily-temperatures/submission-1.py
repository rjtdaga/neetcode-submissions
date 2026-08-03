import numpy as np
class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        final_output = [0] * len(temperatures)
        N = len(temperatures)
        for i in range(N):
            for j in range(i+1,N):
                if temperatures[j] > temperatures[i]:
                    final_output[i] = int(j-i)
                    break
        return final_output
            