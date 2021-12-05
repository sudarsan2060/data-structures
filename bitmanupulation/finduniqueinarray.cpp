#include<iostream>
using namespace std;


int unique(int a[],int n)
{
    int xors=0;
    for(int i=0;i<n;i++)
    {
        xors=xors^a[i];
    }
    return xors;


}
int main()
{ int a[]={1,2,3,4,3,2,1};
    
    cout<<unique(a,7);
    return 0;
}