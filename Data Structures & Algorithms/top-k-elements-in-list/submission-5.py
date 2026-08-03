import numpy as np
class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        unique_list = []
        final_ans = []
        freq_list = []
        topk_freq = [0]*k
        topk = [0]*k
        num_unique = 0
        for i in range(len(nums)):
            if nums[i] in unique_list:
                # Update the frequency
                freq_list[unique_list.index(nums[i])] += 1
            else:
                num_unique += 1
                unique_list.append(nums[i])
                freq_list.append(1)
            print(freq_list)
            #print(res_freq)
        data = [unique_list, freq_list]
        d = np.array(data)
        d = d.T
        sorted_indices = d[:, 1].argsort()[::-1]
        d = d[sorted_indices]
        print(d)   
        for i in range(k):
            final_ans.append(d[i][0])
        return final_ans
