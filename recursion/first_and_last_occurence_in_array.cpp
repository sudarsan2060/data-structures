#include<iostream>
using namespace std;

int fir(int a[],int n,int i,int k)
{
      if(i==n)
      return -1;
    if(a[i]==k)
      return i;

      return fir(a,n,i+1,k);
}

int last(int a[],int n,int i,int k)
{
    if(i==n)
    return -1;
    int re =last(a,n,i+1,k);
    if(re!=-1)
    {
        return re;
    }
    if(a[i]==k)
       return i;

     return -1;

}
int main()
{
    int a[]={1,2,5,3,6,2,4,2};
    cout<<fir(a,8,0,2)<<endl;
     cout<<last(a,8,0,2)<<endl;
     return 0;

}