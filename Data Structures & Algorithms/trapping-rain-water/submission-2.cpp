class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int left_max = height[0];
        int right_max = height[n-1];
        int l = 0; int r = n-1;

        int trapped_water = 0;
        int max_height = 0;

        while (l < r){
            max_height = max(height[l], height[r]);
            if (max_height == height[r]){
                left_max = max(left_max, height[l]);
                trapped_water += (left_max - height[l] > 0) ? left_max - height[l]: 0;
                l++;
            } else{
                right_max = max(right_max, height[r]);
                trapped_water += (right_max - height[r] > 0) ? right_max - height[r] : 0;
                r--;
            }
        }

        return trapped_water;
    }
};
