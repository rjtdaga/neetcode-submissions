import numpy as np
class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        final_prod = [1]*len(nums)
        for i in range(len(nums)):
            for j in range(len(nums)):
                if j != i:
                   final_prod[i] =  final_prod[i]*nums[j]
        return final_prod
        