class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if nums == []:
            return 0
        rem_rep = set(nums)
        num_list = list(rem_rep)
        num_list.sort()
        print(num_list)
        max_freq = 0
        freq = 1
        for i in range(1,len(num_list)):
            if num_list[i]-num_list[i-1] == 1:
                freq += 1
            else:
                if freq > max_freq:
                    max_freq = freq
                    freq = 1
                else:
                    freq = 1
            print(freq)
        if freq > max_freq:
            max_freq = freq
        return max_freq