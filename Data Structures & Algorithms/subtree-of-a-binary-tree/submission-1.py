# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:   
    def isBalanced(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        if p == None and q == None:
            return True
        elif p == None or q == None:
            return False
        if p.val != q.val:
            return False
        left_Balance = self.isBalanced(p.left, q.left)
        right_Balance = self.isBalanced(p.right, q.right)
        return left_Balance and right_Balance

    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        if subRoot == None:
            return True
        if root == None:
            return False
        # Check for root:
        Root_subtree = self.isBalanced(root, subRoot)
        if Root_subtree:
            return True
        Root_left_subtree = self.isSubtree(root.left, subRoot)
        Root_right_subtree = self.isSubtree(root.right, subRoot)
        return Root_left_subtree or Root_right_subtree