class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        res = {}
        for word in strs:
            count = [0]*26
            for i in word:
                count[ord(i) - ord('a')] += 1
            if tuple(count) not in res:
                res[tuple(count)] = [word]
            else:
                res[tuple(count)].append(word)

        return list(res.values())