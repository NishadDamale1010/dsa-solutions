// Last updated: 6/26/2026, 1:42:43 PM
class Solution {
public:

    unordered_map<int,int> freq;

    void dfs(TreeNode* root){
        if(root == NULL)
            return;

        freq[root->val]++;

        dfs(root->left);
        dfs(root->right);
    }

    vector<int> findMode(TreeNode* root) {

        dfs(root);

        int maxFreq = 0;

        for(auto it : freq){
            maxFreq = max(maxFreq, it.second);
        }

        vector<int> ans;

        for(auto it : freq){
            if(it.second == maxFreq){
                ans.push_back(it.first);
            }
        }

        return ans;
    }
};