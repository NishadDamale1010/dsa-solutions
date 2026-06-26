// Last updated: 6/26/2026, 1:44:09 PM
class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;

        while (low < high) {
            int mid = (low + high) / 2;

            if (nums[mid] > nums[high]) {
                low = mid + 1;   // go right
            } else {
                high = mid;      // go left (including mid)
            }
        }

        return nums[low];
    }
};