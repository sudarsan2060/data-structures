
  /* function to count no of nodes*/
  
  int count(struct node*p){
     int c=0;
     while(p!=0){
        c++;
        p=p->next;
     }
   return c;
  }
  
--------------------------------------using recursive call----------------  
  
  
  /* function to count no of nodes using  recursive call*/
  
  int count(struct node *p){
    
    if(p==0){
        return 0;
    }
    else
        return (count(p->next) +1) ;
  
  }
