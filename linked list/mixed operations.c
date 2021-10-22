#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
}*head=NULL;

void display (struct node *p){
    while(p){
        printf("%d ",p->data);
        p=p->next;
    }
}

void insert(int pos,int val)
{
    struct node *p,*t;
    p=(struct node *)malloc(sizeof(struct node));
    p->data=val;
    t=head;
    if(pos==0){
        p->next=head;
        head=p;
    }
    else {
        for(int i=1;i<pos;i++){
            t=t->next;
        }
        p->next=t->next;
        t->next=p;
    }
}
    void create(int a[],int n){
        struct node *p,*q;
      
        head=(struct node *)malloc(sizeof(struct node));
        head->data=a[0];
        head->next=NULL;
        q=head;
        for(int i=1;i<n;i++){
            p=(struct node *)malloc(sizeof(struct node));
            p->data=a[i];
            p->next=0;
            q->next=p;
            q=p;
            
        }
    
}
void deleten(int pos){
    struct node *p,*q;
    p=head;q=NULL;
    if(pos==1){
        head=head->next;
    }
     for (int i=1;i<pos;i++)
          {    q=p;
              p=p->next;
          }
     q->next=p->next;
    
}
int main() {
      int a[]={1,2,3,4,5,6,7};
    
     create(a,7);
     insert(7,6);
     display(head);
     printf("\n");
     deleten(2);
     insert(5,10);
     display(head);
     
    return 0;
}
