class Solution:
    def isPalindrome(self, s: str) -> bool:
        sentence = ""
        for i in s:
            if i.isalpha():
                sentence += i.lower()

            elif i.isdigit():
                sentence += str(i)
        
        return sentence == sentence[::-1]
            