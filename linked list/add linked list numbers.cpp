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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode* ans=new ListNode();
        ListNode * temp=ans;
        while(l1!=0||l2!=0||carry!=0)
        {
           int sum=0;
            if(l1!=0)
            {
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=0)
            {
                sum+=l2->val;
                l2=l2->next;
            }
            sum+=carry;
            carry=sum/10;
            ListNode* p=new ListNode();
            p->val=sum%10;
            p->next=0;
            temp->next=p;
            temp=p;
            
        }
        if(carry==1)
        {
             ListNode*p;
            p->val=carry;
            p->next=0;
            temp->next=p;
            temp=p;
        }
        
        
        return ans->next;
    }
};
