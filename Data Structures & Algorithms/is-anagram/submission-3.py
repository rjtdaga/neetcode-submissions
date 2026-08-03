class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        freq1 = [0]*26
        freq2 = [0]*26
        if len(s) != len(t):
            return False
        for i in range(len(s)):
            freq1[ord(s[i])-ord('a')] = freq1[ord(s[i])-ord('a')] + 1
            freq2[ord(t[i])-ord('a')] = freq2[ord(t[i])-ord('a')] + 1
        for i in range(26):
            if freq1[i] != freq2[i]:
                return False
        return True
