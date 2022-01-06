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
    ListNode* reverseKGroup(ListNode* head, int k) {
        
       
        ListNode* dummy=new ListNode();
        dummy->next=head;
        int count=0;
         ListNode* p=head;
        while(p!=0)
        {
            count++;
            p=p->next;
        }
         ListNode* pre=dummy,*cur=dummy,*nex=dummy;
        
        while(count>=k)
        {
            cur=pre->next;
            nex=cur->next;
            for(int i=1;i<k;i++)
            {
                cur->next=nex->next;
                nex->next=pre->next;
                pre->next=nex;
                nex=cur->next;
            }
            pre=cur;
            count-=k;
        }
        
        
        return dummy->next;
    }
    
    
};
