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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* mn = p;
        TreeNode* mx = q;
        
        if (p->val > q->val){
            mn = q;
            mx = p;
        }
        if (root->val >= mn->val && root->val <= mx->val){
            return root;
        }
        else if (root->val > mn->val && root->val > mx->val){
            return lowestCommonAncestor(root->left, mn, mx);
        }
        else 
        {
            return lowestCommonAncestor(root->right, mn, mx);
        }
    }
};
