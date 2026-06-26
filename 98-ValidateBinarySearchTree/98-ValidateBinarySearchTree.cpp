// Last updated: 6/26/2026, 1:44:45 PM
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
    bool validate(TreeNode*node, long MinVal , long MaxVal){
        if(!node) return true;
        if(node->val<=MinVal || node->val>= MaxVal) return false;
        return validate(node->left , MinVal , node->val) &&
                validate(node->right ,node->val , MaxVal);
    }

    bool isValidBST(TreeNode* root) {
        return validate(root,LONG_MIN , LONG_MAX);
    }
};