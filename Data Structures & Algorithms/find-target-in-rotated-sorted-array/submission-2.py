class Solution:
    def search(self, nums: List[int], target: int) -> int:
        final_ind = -1
        ind1 = 0
        ind2 = len(nums)-1
        min_ind = 0
        while ind2-ind1 > 1:
            ind = int((ind1+ind2)/2)
            if nums[ind] > max([nums[ind1], nums[ind2]]):
                if nums[ind1] > nums[ind2]:
                    ind1 = ind
                else:
                    ind2 = ind
            elif nums[ind] > min([nums[ind1], nums[ind2]]):
                min_ind = ind1
                break
            elif nums[ind] < min([nums[ind1], nums[ind2]]):
                if nums[ind1] > nums[ind2]:
                    ind2 = ind
                else:
                    ind1 = ind
            if nums[ind1] > nums[ind2]:
                min_ind = ind2
            else:
                min_ind = ind1
        # If the target is between min_ind and end index, use that segment. 
        # Else use the other segment
        print(min_ind)
        Seg = []
        WhichSeg = 0
        if target > nums[min_ind] and target < nums[-1]:
            Seg = nums[min_ind:]
            WhichSeg = 1
        elif target > nums[0] and target < nums[min_ind-1]:
            Seg = nums[0:min_ind]
        elif target == nums[min_ind]:
            return min_ind
        elif target == nums[-1]:
            return len(nums)-1
        elif target == nums[0]:
            return 0
        elif target == nums[min_ind-1]:
            return min_ind-1
        else:
            return -1
        print(Seg)
        for i in range(len(Seg)):
            if target == Seg[i]:
                if WhichSeg == 1:
                    return min_ind+i
                else:
                    return i
        return -1
