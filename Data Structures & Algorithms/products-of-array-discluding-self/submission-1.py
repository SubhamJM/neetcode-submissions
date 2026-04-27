class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        l = []
        for i in range(len(nums)):
            prod = 1
            for j in range(len(nums)):
                if j != i:
                    prod *= nums[j]
            l.append(prod)
        return l
