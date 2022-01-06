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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        
        ListNode* p=headA;
        ListNode* q=headB;
        int l1=0,l2=0;
       while(p!=0)
       {
           l1++;
           p=p->next;
       }
        
        while(q!=0)
        {
            l2++;
            q=q->next;
        }
        
        int count=abs(l1-l2);
        p=headA;
        q=headB;
        if(l1>l2)
        {
            while(count--)
            {
                p=p->next;
            }
        }
        else if(l2>l1)
        {
            while(count--)
            {
                q=q->next;
            }
            
        }
        
        while(p!=q)
        {
            p=p->next;
            q=q->next;
        }
        
        return p;
    }
};
