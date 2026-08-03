class Solution:
    def findMin(self, nums: List[int]) -> int:
        ind1 = 0
        ind2 = len(nums)-1
        while ind2-ind1 > 1:
            ind = int((ind1+ind2)/2)
            if min([nums[ind], nums[ind1]]) < min([nums[ind], nums[ind2]]):
                ind2 = ind
            elif min([nums[ind], nums[ind1]]) > min([nums[ind], nums[ind2]]):
                ind1 = ind
            else:
                if nums[ind1] > nums[ind2]:
                    ind2 = ind
                else:
                    ind1 = ind
        return min([nums[ind2], nums[ind1]])
