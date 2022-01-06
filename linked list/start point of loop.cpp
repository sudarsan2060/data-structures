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
    ListNode *detectCycle(ListNode *head) {
        
        
        if(head==0||head->next==0)
            return NULL;
        ListNode *slow=head,*fast=head;
        
        while(fast&& fast->next)
        {
            fast=fast->next->next;
            slow=slow->next;
            
            if(fast==slow)
                break;
        }
        if(fast==0||fast->next==0)
            return 0;
        
        fast=head;
        while(fast!=slow)
        {
            slow=slow->next;
            fast=fast->next;
        }
        
        return slow;
    }
};
