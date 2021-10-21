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

