**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
int solve(LLNode* node) {
    int x=1;
    int n=0;
    LLNode* p;
    p=node;
    while(node!=0)
    {
        x=x*2;
        node=node->next;
    }
    x=x/2;
    while(p!=0)
    {
     n=n +p->val*x;
       x=x/2;
      p=p->next;

    }
    return n;
}
