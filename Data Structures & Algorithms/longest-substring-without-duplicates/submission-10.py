class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        substr = []
        num = 0
        max_len = 0
        leng = 0
        ind = []
        while num < len(s):
            if s[num] not in substr:
                leng += 1
                substr.append(s[num])
                ind.append(num)
                if leng > max_len:
                    max_len = leng
            else:
                leng = 0
                num = ind[substr.index(s[num])]
                print(substr)
                ind = []
                substr = []
                
            num += 1
        return max_len
