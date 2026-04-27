class Solution:

    def encode(self, strs: List[str]) -> str:
        sentence = ""
        for word in strs:
            for i in word:
                sentence+= chr(ord(i)+1)
            sentence += "|"
        return sentence
    def decode(self, s: str) -> List[str]:
        if (s == " "): return [""]
        l = s.split('|')
        for i in range(len(l)):
            word = l[i]
            new_word = ""
            for char in word:
                new_word += chr(ord(char)-1)
            l[i] = new_word
        return l[:-1]