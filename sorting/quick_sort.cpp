#include<bits/stdc++.h>
using  namespace std;


int partition(int a[],int l,int r)
{
    int pivot=a[r];
    int i=l-1;
    for(int j=l;j<r;j++)
    {
        if(a[j]<pivot)            /* for descending oder   replace "<" with ">"  **/
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[r]);

    return i+1;
}
void quick_sort(int a[],int l,int r)
{
    if(l<r)
    {
        int pi=partition(a,l,r);
        quick_sort(a,l,pi-1);
        quick_sort(a,pi+1,r);
    }

    return ;
}

int main()
{
    int a[]={5,3,7,9,1,4,0,2};
    int n=sizeof(a)/sizeof(a[0]);
    quick_sort(a,0,n-1);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}


/** output   **/

0 1 2 3 4 5 7 9 
