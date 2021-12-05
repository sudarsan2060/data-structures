#include<iostream>
using namespace std;
int setbit(int n,int p)
{
    return(n|(1<<p));
}

int getbit(int n,int p)
{
    return ((n&(1<<p))!=0);
}

int unique(int a[],int n)
{
   
   int result=0;
    for(int i=0;i<64;i++)
    {   int sum=0;
        for(int j=0;j<n;j++)
        {
            if(getbit(a[j],i))
               sum++;
        }

        if(sum%3!=0)
        {
          result= setbit(result,i);
        }


    }

    return result;

}

int main()
{  
    int a[]={1,2,3,4,3,2,1,2,1,3};
     
    cout<<unique(a,10);
    return 0;
}