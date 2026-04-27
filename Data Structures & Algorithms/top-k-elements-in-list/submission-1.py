class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        n = len(nums)
        count = [0]*(n+1)
        for i in set(nums):
            x = nums.count(i)
            if count[x] == 0:
                count[x] = [i]
            else:
                count[x].append(i)

        z = 0
        l = []
        for j in count[::-1]:
            if j:
                for num in j:
                    z += 1
                    l.append(num)
            if z == k:
                break

        return l


