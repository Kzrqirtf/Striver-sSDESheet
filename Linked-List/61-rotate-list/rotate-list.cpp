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
    ListNode* rotateRight(ListNode* head, int k)
    {
        if(head==nullptr || head->next==nullptr)return head;
        ListNode* t= head;
        int n=0;
        while(t)
        {
            n++;
            t=t->next;
        }
        while(k%n)
        {
            ListNode* temp= head;
            ListNode* prev= head;
            while(head->next!=NULL)
            {
                head=head->next;
                if(prev->next->next!=nullptr)
                    prev=prev->next;
            }
            prev->next=nullptr;
            head->next = temp;
            k--;
        }
        return head;
        
    }
};