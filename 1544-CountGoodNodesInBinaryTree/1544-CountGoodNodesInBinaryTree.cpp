// Last updated: 6/26/2026, 1:42:06 PM
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int dfs(TreeNode*root , int MaxSoFar){
        if(root==NULL) return 0 ;
        int count = 0 ;
        if(root->val>=MaxSoFar){
            count ++;
            MaxSoFar=root->val;
        }
        count+= dfs(root->left,MaxSoFar);
        count+=dfs(root->right,MaxSoFar);
        return count;
    }

    int goodNodes(TreeNode* root) {
        return dfs(root,root->val);
    }
};