/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* l0, LLNode* l1) {
    LLNode* p =new LLNode();
LLNode *q=p;
    while(l0!=0&&l1!=0)
    {
        if(l0->val==l1->val)
        {
             p->next=l0;
             p=p->next;
             l0=l0->next;
             l1=l1->next;


        } 
        else if(l0->val>l1->val)
        {
            l1=l1->next;
        }
        else
        l0=l0->next;
    }
    p->next=0;
    return  q->next ;
}
