class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        m = defaultdict(int)
        mr = defaultdict(int)
        m[0] = nums[0]
        mr[len(nums)-1] = nums[len(nums)-1]

        for i in range(1, len(nums), 1):
            m[i] = m[i-1] * nums[i]

        for i in range(len(nums)-2, -1, -1):
            mr[i] = mr[i+1] * nums[i]

        output = []
        for i in range(len(nums)):
            if i == 0:
                output.append(mr[i+1])
            elif i == len(nums)-1:
                output.append(m[i-1])
            else:
                output.append(m[i-1]*mr[i+1])
        return output
