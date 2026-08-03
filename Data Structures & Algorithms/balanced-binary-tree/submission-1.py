# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def maxHeight(self, root: Optional[TreeNode]) -> bool:
        if root == None:
            return 0
        return 1 + max(self.maxHeight(root.right), self.maxHeight(root.left))

    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        if root == None:
            return True
        leftH = self.maxHeight(root.left)
        rightH = self.maxHeight(root.right)
        if abs(rightH - leftH) > 1:
            return False
        else:
            leftB = self.isBalanced(root.left)
            rightB = self.isBalanced(root.right)
            if leftB == False or rightB == False:
                return False
        return True
            