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
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL&&fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode* temp=slow->next;
        ListNode* prev=NULL;
        slow->next = NULL;
        while(temp!=NULL)
        {
            ListNode* nex=temp->next;
            temp->next=prev;
            prev=temp;
            temp=nex;
        }
        ListNode* first = head;
        ListNode* second = prev;
        while (second != NULL) {

            ListNode* firstNext = first->next;
            ListNode* secondNext = second->next;

            first->next = second;
            second->next = firstNext;

            first = firstNext;
            second = secondNext;
        }
    }
};