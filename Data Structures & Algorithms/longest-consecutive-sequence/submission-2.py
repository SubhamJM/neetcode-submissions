class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        s = set(nums)
        longest = 0
        for i in s:
            if i-1 in s:
                continue
            length = 1
            n = i
            while n+1 in s:
                length += 1
                n += 1

            longest = max(longest, length)
        return longest
