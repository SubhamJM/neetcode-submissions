class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int highest = 0;
        for (int i : s){
            if (s.contains(i-1)) continue;
            int length = 0;
            while (s.contains(i+1)){
                length++;
                i++;
            }
            highest = max(highest, length+1);
        }
        return highest;
    }
};
