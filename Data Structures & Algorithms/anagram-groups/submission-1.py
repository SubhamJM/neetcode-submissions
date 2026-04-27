class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        d = {}
        for word in strs:
            sorted_word = ''.join(sorted(word))
            if sorted_word not in d:
                d[sorted_word] = [word]
            else:
                d[sorted_word].append(word)
        l = []
        for i in d:
            l.append(d[i])

        return l