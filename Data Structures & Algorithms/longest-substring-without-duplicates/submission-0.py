class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        longest = 0
        i = 0
        for j in range(len(s)):
            if s[j] not in s[i:j]:
                longest = max(longest, j-i+1)
            else:
                while s[j] in s[i:j]:
                    i+=1
        return longest
