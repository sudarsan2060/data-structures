/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* node, int target) {           // we have to delete value k from linked list and return remaining 
    
    while(node!=0&&node->val==target )
    {
        node=node->next;
    }

     if(node==NULL|| node->next==NULL)
     return node;

     
      LLNode* p;
       
      p=node;
      while(p->next!=NULL)
      {    
          if(p->next->val==target)
             {
                 p->next=p->next->next;
             }
             else
             {
                 
                 p=p->next;
             }
      }


   
      
     
     return node;
}
