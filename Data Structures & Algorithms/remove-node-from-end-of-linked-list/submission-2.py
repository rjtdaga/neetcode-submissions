# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        # Find the length of listnode:
        if head == None:
            return None
        Len = 0
        dum_node = head
        while dum_node != None:
            Len += 1
            dum_node = dum_node.next
        if Len == 1 and n == 1:
            return None
        if Len == 2 and n == 1:
            head.next = None
            return head
        elif Len == 2 and n == 2:
            return head.next
        element_remove = Len - n
        if element_remove == 0:
            return head.next
        start_node = head
        iter = 0
        while head != None:
            if iter == element_remove-1:
                head.next = head.next.next
            iter += 1
            head = head.next
        return start_node
            

