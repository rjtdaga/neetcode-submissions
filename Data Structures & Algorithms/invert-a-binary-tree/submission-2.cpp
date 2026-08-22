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
    TreeNode* invertTree(TreeNode* root) {
        // Be at one node and invert the right and left node
        if (root == nullptr){
            return root;
        }
        if (root->right == nullptr && root->left == nullptr){
            return root;
        }
        
        TreeNode* dummy = root->left;
        root->left = root->right;
        root->right = dummy;

        root->left = invertTree(root->left);
        root->right = invertTree(root->right);

        return root;
    }
};
