class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        answer = [1]*n
        current = nums[0]
        for i in range(1,n):
            answer[i] = answer[i]*current
            current *= nums[i]
        
        current = nums[n-1]
        for i in range(n-2, -1, -1):
            answer[i] = answer[i]*current
            current *= nums[i]
        
        return answer