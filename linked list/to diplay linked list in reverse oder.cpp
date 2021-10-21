#include <iostream>

using namespace std;


struct node{
int data;
struct node *next;}*first=NULL;

 void create(int a[],int n){
  int i;
  struct node *t,*last;
  first=(struct node *)malloc(sizeof(struct node));
  first->data=a[0];
  first->next=NULL;
  last=first;


  for(i=1;i<n;i++){
    t=(struct node *)malloc(sizeof(struct node));
    t->data=a[i];
    t->next=NULL;
    last->next=t;
    last=t;
  }

 }
----------------------- /* display function through recursion*/-------------
 void display(struct node *p)
 {

     if(p!=0){
       display(p->next);              /*    display function called  before printing its value 
                                              so  it prints in reverse oder*/
    cout<<p->data<<endl;}

 }
------------------------------------------------------------------------------------------------------
 int main(){
 int a[]={3,4,5,6,7};
 create(a,5);
 display(first);
 return 0;
 }

/* out put 
7
6
5
4
3
*/
        
