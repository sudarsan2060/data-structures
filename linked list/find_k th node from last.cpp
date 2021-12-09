/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
int solve(LLNode* node, int k) {
    
    int l=0;
    LLNode* p,*q;
    p=node;
    q=0;
    while(p!=0)
    {
        l++;
        p=p->next;
    }
    l=l-k;
    if(l==0)
    return node->val;
    
    while(l--)
    {
        q=node;
        node=node->next;  
    }
    return q->val;
}
