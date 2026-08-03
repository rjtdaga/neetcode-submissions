class Solution:

    def encode(self, strs: List[str]) -> str:
        sep = "\x03"
        single_str = ""
        for i in range(len(strs)):
            single_str += strs[i]
            single_str += sep
        return single_str
    def decode(self, s: str) -> List[str]:
        sep = "\x03"
        if s == "":
            return []
        if s == sep:
            return [""]
        decoded_str = []
        curr_word = ""
        if s[0] == sep:
            decoded_str.append(curr_word) 
        for i in range(len(s)-1):
            if s[i] != sep:
                curr_word += s[i]
            if s[i+1] == sep:
                decoded_str.append(curr_word)
                curr_word = ""
        return decoded_str
