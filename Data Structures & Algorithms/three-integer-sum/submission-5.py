class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        final_list = []
        indices_removed = []
        nums.sort()
        for i,a in enumerate(nums):
            if a > 0:
                break
            if i > 0 and a == nums[i-1]:
                continue
            j, k = i+1, len(nums)-1 
            sums = nums[i] + nums[j] + nums[k]
            while k > j:
                sums = nums[i] + nums[j] + nums[k]
                if sums > 0:
                    k -= 1
                elif sums < 0:
                    j += 1
                else:
                    final_list.append([nums[i], nums[j], nums[k]])
                    k -= 1
                    j += 1
                    while j < k and nums[j] == nums[j-1]:
                        j += 1
        return final_list



            
                    