// Last updated: 6/26/2026, 1:44:57 PM
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int low = 0, high = rows * cols - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int row = mid / cols;
            int col = mid % cols;
            int value = matrix[row][col];
            if (value == target)
                return true;
            else if (value < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return false;
    }
};