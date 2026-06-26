// Last updated: 6/26/2026, 1:45:18 PM
#include <vector>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        int k = 0; // The "write" index for non-val elements

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }
        
        return k;
    }
};
