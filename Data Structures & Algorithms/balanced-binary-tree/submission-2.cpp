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
    int maxDepth(TreeNode* root) {
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
    bool isBalanced(TreeNode* root) {
        if (root == nullptr){
            return true;
        }
        bool bal = true;
        if (abs(maxDepth(root->right)-maxDepth(root->left)) > 1){
            return false;
        }
        else{
            bal = isBalanced(root->right);
            if (!bal)
                return false;
            bal = isBalanced(root->left);
            if (!bal)
                return false;
        }

        return true;
    }
};
