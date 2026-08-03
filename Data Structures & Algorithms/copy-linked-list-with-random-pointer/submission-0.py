"""
# Definition for a Node.
class Node:
    def __init__(self, x: int, next: 'Node' = None, random: 'Node' = None):
        self.val = int(x)
        self.next = next
        self.random = random
"""

class Solution:
    def copyRandomList(self, head: 'Optional[Node]') -> 'Optional[Node]':
        # Copy all the values into an array
        value_arr = []
        dummy = head
        while dummy != None:
            value_arr.append(dummy.val)
            dummy = dummy.next
        # First copy the list without random pointer
        copy_list = {None:None}
        cur = head
        while cur:
            copy = Node(cur.val)
            copy_list[cur] = copy
            cur = cur.next
        cur = head
        while cur:
            copy = copy_list[cur]
            copy.next = copy_list[cur.next]
            copy.random = copy_list[cur.random]
            copy_list[cur] = copy
            cur = cur.next
        return copy_list[head]


        
