class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        d = {}
        for i in range(len(strs)):
            word = strs[i]
            sorted_word = "".join(sorted(word))

            if sorted_word not in d:
                d[sorted_word] = [word]
            else: d[sorted_word].append(word)

        answer = []
        for k in d:
            answer.append(d[k])
        return answer
            