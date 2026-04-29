class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> answer;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n; i++){
            if (i > 0 && nums[i-1] == nums[i]) continue;
            int l = i + 1;
            int r = n - 1;
            while (l < r){
                int sum = nums[i] + nums[l] + nums[r];
                if (sum == 0){
                    answer.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    while (l < n && nums[l] == nums[l-1]) l++;
                } else if (sum < 0){
                    l++;
                } else r--;
            }

        }
        return answer;
    }
};
