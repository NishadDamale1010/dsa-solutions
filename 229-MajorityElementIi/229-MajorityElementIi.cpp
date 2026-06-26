// Last updated: 6/26/2026, 1:43:36 PM
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ls;
        unordered_map<int,int> mp;
        int n = nums.size();
        int mini =(n/3)+1;
        for(int i = 0 ; i < n ; i ++){
            mp[nums[i]]++;
            if(mp[nums[i]]==mini){
                ls.push_back(nums[i]);
            }
            if(ls.size()==2) break;
        }
        return ls;
    }
};