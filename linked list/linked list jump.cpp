/**
   You are given a singly linked list node containing positive integers. 
   Return the same linked list where every node's next points to the node val
   nodes ahead. If there's no such node, next should point to null.
   **/
/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* node) {
   
   if(node==0||node->next==0)
   return node;

   LLNode *p,*q;
      p=node;
      while(p!=0)
      {      q=p;
          int k=p->val;
          while(k&&p)
          { 
              p=p->next;
              k--;
          }
          q->next=p;
      }
   
    
    

    return node;
}
