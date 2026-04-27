class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        result = [1]
        pre = 1
        for i in nums[:-1]:
            pre *= i
            result.append(pre)

        post = 1
        j = -1
        while j > (-len(nums)):
            result[j] *= post
            post *= nums[j]
            j -= 1
        result[0] *= post

        return result