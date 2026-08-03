class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        # Evaluate the list of time cars will take to reach
        N = len(position)
        time = [0]*N
        for i in range(N):
            time[i] = (target - position[i])/speed[i]
        # Sort the cars and time in terms of position
        sorted_time = [val for _, val in sorted(zip(position, time))]
        print(sorted_time)
        num_fleet = 1
        for i in range(N-1, 0, -1):
            if sorted_time[i] < sorted_time[i-1]:
                num_fleet += 1
            else:
                sorted_time[i-1] = sorted_time[i]
        return num_fleet