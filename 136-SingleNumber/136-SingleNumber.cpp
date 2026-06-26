// Last updated: 6/26/2026, 1:44:20 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int , int >freq;
        for(int x : nums) freq[x]++;
        for(int x : nums){
            if(freq[x]==1) return x;
        }
        return -1;
    }
};