// Last updated: 6/26/2026, 1:43:57 PM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;
            int major=nums.size()/2;
            if(mp[x]>major){
                return x;
            }
        }
        return -1;
    }
};