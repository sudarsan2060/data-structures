
#include <iostream>

using namespace std;

int findminimum(int a[],int low,int high)
{
    if(high==low)
    return a[low];
    if(high<low)
    return a[0];
    int mid= (high+low)/2;
    if(mid<high&&a[mid]>a[mid+1])
    return a[mid+1];
    if(mid>low&&a[mid]>a[mid-1])
    return a[mid-1];
    if(a[high]>a[mid])
     return findminimum(a,low,mid-1);
     
     return findminimum(a,mid+1,high);
    
    
    
}
int main()
{
    int a[]={3,4,5,0,1,2};
    int n=sizeof(a)/sizeof(a[0]);
     cout<<findminimum(a,0,n-1);
    return 0;
}

/***********output*********/
0
