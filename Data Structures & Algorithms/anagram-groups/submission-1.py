import numpy as np
class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        freq = np.zeros((26, len(strs)))
        for i in range(len(strs)):
            for j in range(len(strs[i])):
                word = strs[i]
                freq[ord(word[j])-ord('a'),i] += 1
        final_ans = []
        arr_indices = []
        for i in range(len(strs)):
            if i in arr_indices:
                continue
            curr_list = [strs[i]]
            for j in range(i+1, len(strs)):
                if np.array_equal(freq[:,i],freq[:,j]):
                    curr_list.append(strs[j])
                    arr_indices.append(j)
            final_ans.append(curr_list)
        return final_ans