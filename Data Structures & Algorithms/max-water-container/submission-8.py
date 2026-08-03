class Solution:
    def maxArea(self, heights: List[int]) -> int:
        MaxArea = 0
        if len(heights) < 2:
            return 0
        for i in range(len(heights)):
            for j in range(i+1, len(heights)):
                Area  = (j-i)*min(heights[i], heights[j])
                if Area > MaxArea:
                    MaxArea = Area
        return MaxArea

        