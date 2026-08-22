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
    int maxDepth(TreeNode* root){
        if (root == nullptr){
            return 0;
        }
        if (root->right ==nullptr && root->left == nullptr){
            return 1;
        }
        int depth_left = maxDepth(root->left) + 1;
        int depth_right = maxDepth(root->right) + 1;

        return max(depth_left, depth_right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if (root == nullptr){
            return 0;
        }
        int diam = maxDepth(root->right) + maxDepth(root->left);
        int diam_right = 0;
        int diam_left = 0;
        if (root->right != nullptr)
            diam_right = maxDepth(root->right->right) + maxDepth(root->right->left);
        if (root->left != nullptr)
            diam_left = maxDepth(root->left->right) + maxDepth(root->left->left);
        return max({diam, diam_right, diam_left});
    
    }
};
