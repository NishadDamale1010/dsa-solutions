// Last updated: 6/26/2026, 1:42:03 PM
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        
        int j = 0; 
        
        for (int num = 1; num <= n && j < target.size(); num++) {
            ans.push_back("Push");
            
            if (num == target[j]) {
                j++;
            } else {
                ans.push_back("Pop");
            }
        }
        
        return ans;
    }
};