/* create and display linked list*/
#include <bits/stdc++.h>
using namespace std;
class node{
  public:
  int data;
  node *next;
};
void display(node *p){
  while(p!=0){
    cout<<p->data<<endl;
    p=p->next;
  }
}
int main(){
  node *head=NULL;
  node *second=NULL;
  node *third=NULL;
  head=new node();
  second=new node();
  third=new node();
  head->data=10;
  head->next=second;
  second->data=20;
  second->next=thrd;
  third->data=30;
  third->next=NULL;
  display(head);
  return 0;
  )
    
    
    /* out put */
    /*
    10
    20
    30
    */
