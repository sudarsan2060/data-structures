
#include<iostream>
using namespace  std;

int noofone(int n)
{
    int count=0;
    while(n)
    {
        n=n&(n-1);
        count++;
    }
    return count;
}

int main()
{
    int n;
    cin>>n;
    cout<<noofone(n);
    return 0;
}