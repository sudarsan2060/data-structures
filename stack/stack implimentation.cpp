#include<iostream>
using namespace std;

struct stack
{
    int top;
    int size;
    int *s;
};

void createstack(struct stack *st)
{
    cout<<"enter size"<<endl;
    cin>>st->size;
    st->top=-1;
    st->s=(int*)malloc(st->size*sizeof(int));
}

void display(struct stack st)
{
    int i;
    for(i=st.top;i>=0;i--)
    cout<<st.s[i]<<" ";
    cout<<endl;
}
void push(struct stack *st,int val)
{
    if(st->top==st->size-1)
    cout<<"full"<<endl;
    else
    {
        st->top++;
        st->s[st->top]=val;
    }
}
int pop(struct stack *st)
{  int x=-1;
    if(st->top==-1)
    cout<<"empty"<<endl;
    else
    {
        x=st->s[st->top];
        st->top--;
    }
    return x;
}
int peek(struct stack st,int index)
{
    int x=-1;
    if(st.top-index<0)
    cout<<"invalid";
    x=st.s[st.top-index+1];
    return x;
}

int main(){
    struct stack st;
    createstack(&st);
    push(&st,5);
    push(&st,10);
    push(&st,25);
    push(&st,45);
    push(&st,225);
    push(&st,415);
     display(st);
   cout<< pop( &st)<<endl;
   cout<<peek(st,2)<<endl;
    display(st);
    return 0;
}
