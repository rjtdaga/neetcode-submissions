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
    void reorderList(ListNode* head) {
        int n = 0;
        ListNode * dum = head;
        while (dum)
        {
            ++n;
            dum = dum->next;
        }
        ListNode * dum2[n];
        dum = head;
        int i = 0;
        while (dum)
        {
            dum2[i] = dum;
            dum = dum->next;
            ++i;
        }
        if (n%2 == 0)
        {
            for (i = 0; i < n/2-1; ++i)
            {
                dum2[i]->next = dum2[n-i-1];
                dum2[n-i-1]->next = dum2[i+1];
            }
            dum2[n/2-1]->next = dum2[n/2];
            dum2[n/2]->next = nullptr;
        }
        else
        {
            for (i = 0; i < n/2; ++i)
            {
                dum2[i]->next = dum2[n-i-1];
                dum2[n-i-1]->next = dum2[i+1];
            }
            dum2[i]->next = nullptr;
        }
        head = dum2[0];
    }
};
