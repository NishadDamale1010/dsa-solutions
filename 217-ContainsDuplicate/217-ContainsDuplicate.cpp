// Last updated: 6/26/2026, 1:43:45 PM
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       unordered_map<int,int> mp;
       for(int x:nums){
        mp[x]++;
        if(mp[x]>1){
            return true;
        }

       }
       return false; 
    }
};