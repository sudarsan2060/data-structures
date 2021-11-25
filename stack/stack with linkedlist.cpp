#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
}*top=NULL;

void push(int x)
{
    struct node *t;
    t = (struct node*)malloc(sizeof(struct node));

    if(t==NULL)
    cout<<"full"<<endl;
    else{
        t->data=x;
        t->next=top;
        top=t;
    }
}
int pop()
{
    int x=-1;
     struct node *t;
    if(top==NULL)
    cout<<"empty"<<endl;
    else{
        t=top;
        top=top->next;
        x=t->data;
        free(t);

    }
    return x;
}

void display()
{
    struct node *p;
    p=top;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;

    }
    cout<<endl;
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    display();
    pop();
    display();
    return 0;
}
