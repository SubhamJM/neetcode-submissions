class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        max_count = 0
        for i in nums:
            curr_count = 0
            if i-1 not in nums:
                curr_count += 1
                j = i+1
                while j in nums:
                    curr_count += 1
                    j += 1
            max_count = max(max_count, curr_count)
            
        return max_count