class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = -1;
        int n = matrix.size();
        int m = matrix[0].size();

        int l = 0; int r = matrix.size()-1;
        while (l <= r){
            int mid = (l+r)/2;
            if (matrix[mid][0] <= target && matrix[mid][m-1] >= target){
                row = mid;
                break;
            }
            else if (matrix[mid][0] > target) r = mid-1;
            else l = mid+1;
        }
        if (row == -1) return false;
        
        l = 0; r = m-1;
        while (l <= r){
            int mid = (l+r)/2;
            if (matrix[row][mid] == target) return true;
            else if (matrix[row][mid] < target) l = mid+1;
            else r = mid-1;
        }
        return false;
    }
};
