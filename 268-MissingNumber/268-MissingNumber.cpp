// Last updated: 6/26/2026, 1:43:21 PM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        sort(nums.begin(),nums.end());
        for(int i =0;i<n;i++){
            if(nums[i]!=i){
                return i;
            }
        }
        return nums.size();
    }
};