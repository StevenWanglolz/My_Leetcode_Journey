class Solution:
    def interpret(self, command: str) -> str:
        o = ""
        for i, s in enumerate(command):
            if s == "G":
                o += "G"
            elif s == "(":
                if command[i+1] == ")":
                    o += "o"
                else:
                    o += "al"
        return o