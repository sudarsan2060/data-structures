 **************linear searching in linked list*****

node *searching(node *p,int key){
    while(p){
        if(p->data==key)
        return p;
       
        p=p->next
    }
    return 0;
}


---------------recursive call-----------

node *searching(node *p,int key){
    if(p->data==key)
      return p;
      else
      return searching(p->next,key);
}

*********move to head ***********
/* to bring the key value to  first node*/

node *search(node *p,int key){
    node *q=NULL;
    while(p){
        if(p->data==key){
            q->next=p->next;
            p->next=first;
            first=p;
        }
        q=p;
        p=p->next;
    }
    
}
