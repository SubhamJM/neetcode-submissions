class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        d = {}
        answer =[]
        for i in nums:
            if i not in d:
                d[i]=1
            else : d[i]+=1
        
        l = [[] for i in range(len(nums)+1)]

        for key in d:
            l[d[key]].append(key)
        
        for i in range(len(l)-1, -1, -1):
            if (l[i]):
                while l[i] and k > 0:
                    k-=1
                    answer.append(l[i].pop())
        return answer

        