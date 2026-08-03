class Solution:
    def maxArea(self, heights: List[int]) -> int:
        if len(heights) < 2:
            return 0
        i = 0
        j = len(heights)-1
        MaxArea = (j-i)*min(heights[i], heights[j])
        while i < j:
            if heights[i] > heights[j]:
                j -= 1
            else:
                i += 1
            Area = (j-i)*min(heights[i], heights[j])
            if Area > MaxArea:
                MaxArea = Area
        return MaxArea