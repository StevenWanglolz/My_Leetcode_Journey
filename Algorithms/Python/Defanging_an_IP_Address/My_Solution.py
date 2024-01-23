class Solution:
    def defangIPaddr(self, address: str) -> str:
        output = ""
        for i in range(0, len(address)):
            if address[i] == ".":
                output += "[.]"
            else:
                output += address[i]
        return output