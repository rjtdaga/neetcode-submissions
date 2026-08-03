import numpy as np
class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        pre_prod = [1]*len(nums)
        post_prod = [1]*len(nums)
        final_ans = [1]*len(nums)
        for i in range(len(nums)-1):
            pre_prod[i+1] = pre_prod[i]*nums[i]
            post_prod[len(nums)-i-2] = post_prod[len(nums)-i-1]*nums[len(nums)-i-1]
        for i in range(len(nums)):
            final_ans[i] = pre_prod[i]*post_prod[i]
        return final_ans
        