class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
         ListNode *p,*q;
        p=head;
        int count=0;
        while(p!=0)
        {
            count++;
            p=p->next;
        }
        p=head;
        count-=n;
        if(count==0)
        {
            head=head->next;
        }
        else
        {
            while(count--)
            {
                q=p;
                p=p->next;
            }
            q->next=p->next;
        }
        
        return head;
    }
};
