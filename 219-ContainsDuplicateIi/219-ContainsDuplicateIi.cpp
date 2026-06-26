// Last updated: 6/26/2026, 1:43:44 PM
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> lastIndex;

        for (int i = 0; i < nums.size(); i++) {
            if (lastIndex.count(nums[i])) {
                if (i - lastIndex[nums[i]] <= k) {
                    return true;
                }
            }
            lastIndex[nums[i]] = i;
        }

        return false;
    }
};