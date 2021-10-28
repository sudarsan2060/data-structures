#include <stdio.h>
#include <stdlib.h>
struct node{
  char data;
  struct node *next;
  }*head=0,*last=0;


void insert_begin(char val){
 struct node *p;
 p=(struct node *)malloc(sizeof(struct node));
 p->data=val;
 p->next=0;
 if(head==0)
 {
    head=p;
    head->next=head;
    last=p;
 }
 else{
    p->next=head;
    head=p;
    last->next=p;
 }
}
void display(struct node *p){
   while(p->next!=head)
   {
       printf("%c ",p->data);
       p=p->next;
   }
   printf("%c ",p->data);
}
void insert_last(int val)
{
    struct node *p,*t;
    t=head;
    p=(struct node *)malloc(sizeof(struct node));
    p->data=val;
    p->next=0;
    if (last==0)
    {
        last=p;
        head=p;
        p->next=p;
    }
    else{
    while(t->next!=head)
    {
        t=t->next;

    }
    t->next=p;
    p->next=head;
    last=p;

    }
}
void delete_beginning(){
    last->next=head->next;
    head=head->next;
}
void delete_end(){
    struct node *p,*t;
    p=head;
    t=0;
    while(p->next!=head)
    {
        t=p;
        p=p->next;
    }
    t->next=p->next;
    last=t;
}
int main()
{
    insert_begin('a');
    insert_last('c');
    display(head);
    printf("\n");
    delete_beginning();

    display(head);
    printf("\n");
    delete_end();
    display(head);
    return 0;
}


