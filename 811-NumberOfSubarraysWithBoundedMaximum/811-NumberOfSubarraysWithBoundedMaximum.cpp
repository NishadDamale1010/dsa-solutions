// Last updated: 6/26/2026, 1:42:19 PM
class Solution {
public:
    int countSubArrays(vector<int>&nums , int k){
        int count = 0 ;
        int len = 0;
        for(int x:nums){
            if(x<=k){
                len ++;
            }
            else{
                len = 0;
            }
            count +=len;
        }
        return count ;
    }
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        return countSubArrays(nums,right)-countSubArrays(nums,left-1);
    }
};