// Last updated: 6/26/2026, 1:45:06 PM
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int farthest = 0 ;
        for(int i = 0 ; i < nums.size() ; i ++){
            if(i>farthest) return false;
            farthest = max(farthest , nums[i]+i);
            if(farthest>=nums.size()-1) return true;
        }
        return true;
    }
};