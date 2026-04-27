#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if (nums.size() == 0) return false;

        for (int i = 1; i < nums.size(); i++){
            if (nums[i] == nums[i-1]) return true;
        }

        return false;
    }
};