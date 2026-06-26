// Last updated: 6/26/2026, 1:41:59 PM
class Solution {
public:
    bool check(vector<int>& nums) {
       int n = nums.size();
       int count =0;
       for(int i =0 ; i<n ; i++){
        if(nums[i]>nums[(i+1)%n]){
            count ++;
        }
       } 
       return count<=1;
    }
};