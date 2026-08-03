class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        m = 0
        final_ans = 0
        if len(tokens) == 1:
            return int(tokens[0])
        while m < len(tokens):
            if tokens[m] != "+" and tokens[m] != "-" and tokens[m] != "*" and tokens[m] != "/":
                m += 1
            else:
                if tokens[m] == "+":
                    final_ans = int(tokens[m-1])+int(tokens[m-2])
                if tokens[m] == "-":
                    final_ans = int(tokens[m-2])-int(tokens[m-1])
                if tokens[m] == "*":
                    final_ans = int(tokens[m-1])*int(tokens[m-2])
                if tokens[m] == "/":
                    final_ans = int(int(tokens[m-2])/int(tokens[m-1]))
                tokens.pop(m)
                tokens.pop(m-1)
                tokens.pop(m-2)
                tokens.insert(m-2, str(final_ans))
                print(tokens)
                m = m-1
        return final_ans
                
            