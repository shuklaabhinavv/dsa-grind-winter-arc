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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        if(head==NULL||head->next==NULL)
        {
            return head;
        }
        ListNode* copy=head->next;
        ListNode* prev=head;
        while(copy!=NULL)
        {
            if (prev->val!=copy->val)
            {
                prev->next=copy;
                prev=copy;
            }
            copy=copy->next;
        }
        prev->next=NULL;
        return head;    
    }
};