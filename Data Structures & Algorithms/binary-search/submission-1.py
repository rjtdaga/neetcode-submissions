class Solution:
    def search(self, nums: List[int], target: int) -> int:
        N = len(nums)
        for i in range(N):
            if nums[i] < target:
                continue
            elif nums[i] > target:
                return -1
            else:
                return i
        return -1