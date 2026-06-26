// Last updated: 6/26/2026, 1:44:11 PM
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int prefix =1 , suffix=1;
        int max_product=INT_MIN;
        for (int i = 0; i < n; i++) {
            if(prefix==0) prefix=1;
            if(suffix==0) suffix=1;
            prefix*=nums[i];
            suffix*=nums[n-i-1];
            max_product= max(max_product, max(prefix,suffix));
        }
        return max_product;
    }
};