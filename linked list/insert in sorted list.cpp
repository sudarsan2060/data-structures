
****************inserting in sorted list****************


 void sortedinsertion(node *p,int x){
    node *t=new node();
    node *q=NULL;
    if(first==0){
        first=t;
    }
    
    else {
    while(p&&p->data<x){
        q=p;
        p=p->next;
    }
    if(p==first){
        t->next=first;
        first=t;
    }
    else{
    t->next=q->next;
    q->next=t;
        
    }
        
    }
    
}
