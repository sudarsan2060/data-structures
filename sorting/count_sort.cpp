#include<bits/stdc++.h>
using namespace std;

void count_sort(int a[],int n)
{
    int k=a[0];
    for(int i=0;i<n;i++)
      k=max(k,a[i]);
   
   int count[k+1]={0};

   for(int i=0;i<n;i++)
   {
       count[a[i]]++;
   }
   for(int i=1;i<=k;i++)
     count[i]+=count[i-1];

   int output[n];

   for(int i=0;i<n;i++)
   {
        output[--count[a[i]]]=a[i];
   }
   for(int i=0;i<n;i++)
   {
       a[i]=output[i];
   }

}



int main()
{
    int a[]={5,3,7,9,1,4,0,2};
    int n=sizeof(a)/sizeof(a[0]);
    count_sort(a,n);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}

/***   output     ***/

0 1 2 3 4 5 7 9 
