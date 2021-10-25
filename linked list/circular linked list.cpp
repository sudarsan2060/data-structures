#include <iostream>

using namespace std;


struct node{
 int data;
 struct node *next;
}*head=NULL;
-------------------------------------------creating circular linked list--------------------------------
void create(int a[],int n){
 int i;
 struct node *p,*last;
 head= new node();
 head->data=a[0];
 head->next=head;
 last=head;
 for(i=1;i<n;i++){
    p=new node();
    p->data=a[i];
    p->next=last->next;
    last->next=p;
    last=p;
 }
}
-------------------------------------diaplay circular linked list using do-while ----------------------
 void display(struct node *p){
  do{
    cout<<p->data<<endl;
    p=p->next;
  }while(p!=head);
 }
-------------------------------display circular linkedlist using recursive calls-----------------------
 void rdisplay(struct node *p){

 static int flag=0;
 if(p!=head||flag==0){
     flag=1;
   cout<<p->data<<endl;
    rdisplay(p->next);
 }
 flag=0;
    }

int main()
{
    int a[]={1,3,4,5,6,78,5};
    create(a,7);
    display(head);
    return 0;
} 
-------------------------- out put-------------------
  1
  3
  4
  5
  6
  78
  5
  
