 
/* Node structure  used in the program

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};
*/
Node* mergel(Node* a,Node* b)
{
    Node *temp=new Node(0);
    Node *res =temp;
    while(a!=0&&b!=0)
    {
        if(a->data<b->data)
        {
            temp->bottom=a;
            temp=a;
            a=a->bottom;
        }
        else
        {
            temp->bottom=b;
            temp=b;
            b=b->bottom;
        }
    }
    
    if(a)
    {
        temp->bottom=a;
    }
    if(b)
      temp->bottom=b;
      
      return res->bottom;
}

/*  Function which returns the  root of 
    the flattened linked list. */
Node *flatten(Node *root)
{
   // Your code here
   
   if(root ==NULL||root->next==NULL)
    return root;
    
    root->next=flatten(root->next);
    
    root =mergel(root,root->next);
    
    return root;
   
   
}
