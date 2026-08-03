def check_substr(s1: str, s2: str) -> bool:
    # Function to check if s1 is a permutation of s2
    s1_freq = [0]*26
    s2_freq = [0]*26
    for i in range(len(s1)):
        s1_freq[ord(s1[i])-ord('a')] += 1
        s2_freq[ord(s2[i])-ord('a')] += 1
    if s1_freq == s2_freq:
        return True
    else:
        return False

class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        for i in range(0,len(s2)-len(s1)+1):
            s2_substr = s2[i:i+len(s1)]
            if check_substr(s1, s2_substr)==True:
                return True
        return False
