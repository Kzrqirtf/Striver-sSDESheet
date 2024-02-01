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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        //First We can find difference in length
        int a=0,b=0;
        ListNode* t1=headA;
        ListNode* t2=headB;
        while(t1 || t2)
        {
            if(t1!=NULL)
            {
                a++;
                t1=t1->next;
            }
            if(t2!=NULL)
            {
                b++;
                t2=t2->next;
            }
        }
        t1=headA;
        t2=headB;
        int diff = abs(a-b);
        if(a>b)
        {
            while(diff)
            {   t1=t1->next;
                diff--;    
            }
        }
        else
        {
            while(diff)
            {   t2=t2->next;
                diff--;    
            }

        }
        while(t1!=t2 && t1!=nullptr && t2!=nullptr)
        {
            t1=t1->next;
            t2=t2->next;
        }
        return t1;
    
    }
};