class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.lower()
        non_alpha = ""
        for i in range(len(s)):
            if (ord(s[i])-ord('a') < 26 and ord(s[i])>=ord('a')) or s[i].isdigit():
                non_alpha += s[i]
        for i in range(int(len(non_alpha)/2)):
            if non_alpha[i] != non_alpha[len(non_alpha)-i-1]:
                return False
        return True