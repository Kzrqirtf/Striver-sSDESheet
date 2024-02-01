/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head)
    {
        ListNode* slow=head;
        ListNode* fast=head;
        bool cycle=false;
        while(fast && (fast->next!=NULL))
        {
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow)
            {
                slow=head;
                cycle=true;
                break;
                
            } 
        }
        if(cycle==true)
        {
            while(fast!=slow)
                {
                    fast=fast->next;
                    slow=slow->next;
                }
                return fast;

        }
        return NULL;
    }
};