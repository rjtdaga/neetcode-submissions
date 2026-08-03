/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(-1);
        ListNode * Curr = &dummy;
        while (list1 != nullptr && list2 != nullptr)
        {
            if (list1->val < list2->val)
            {
                Curr->next = list1;
                list1 = list1->next;
            }
            else
            {
                Curr->next = list2;
                list2 = list2->next;
            }
            Curr = Curr->next;
        }
        if (list1 != nullptr)
        {
            Curr->next = list1;
        }
        if (list2 != nullptr)
        {
            Curr->next = list2;
        }
        return dummy.next;
    }
};
