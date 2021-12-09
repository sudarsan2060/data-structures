/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
int solve(LLNode* node) {
    
    int count=0;
    LLNode*p;
    p=node;
   

    while(p)
    {
        count++;
        p=p->next;
    }
    if(count==0)
    return 0;
    p=node;
    count=(count)/2 ;
    while(count--)
    {
        p=p->next;
    }
    
    return p->val;
}
