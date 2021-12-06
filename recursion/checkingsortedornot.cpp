#include<iostream>
using namespace std;

bool sorted(int a[],int n)
{
    if(n==1)
    {
        return true;
    }

    bool res=sorted(a+1,n-1);

    return (a[0]<a[1]&&res);
}

int main()
{
    int a[]={1,2,3,8,5,6,7};
    cout<<sorted(a,7);
    return 0;
}