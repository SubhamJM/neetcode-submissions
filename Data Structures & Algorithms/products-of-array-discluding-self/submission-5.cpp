class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer(nums.size(), 1);
        int mul = 1;
        for (int i = 1; i < nums.size(); i++){
            mul *= nums[i-1];
            answer[i] = mul;
        }
        mul = 1;
        for (int i = nums.size() - 2; i >= 0; i--){
            mul *= nums[i+1];
            answer[i]*=mul;
        }

        return answer;
    }
};
