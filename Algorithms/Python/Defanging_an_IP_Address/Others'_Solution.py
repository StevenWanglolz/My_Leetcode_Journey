# link: https://leetcode.com/problems/defanging-an-ip-address/solutions/4132072/easy-python-solution-defanging-ip-address-o-n-solution/

class Solution:
    def defangIPaddr(self, address: str) -> str:
        return address.replace('.','[.]')
        
        