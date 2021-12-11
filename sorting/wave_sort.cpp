#include<bits/stdc++.h>
using namespace std;

 void wave_sort(int a[],int n)
 {
     for(int i=1;i<n;i+=2)
     {
         if(a[i]>a[i-1])
         swap(a[i],a[i-1]);
         if(a[i]>a[i+1]&&i<n-1)
          swap(a[i],a[i+1]);
     }
 }

int main()
{
 int a[]={1,3,4,7,5,6,2,0};
 int n=sizeof(a)/sizeof(a[0]);
   
 wave_sort(a,n);
 for(int i=0;i<n;i++)
 {
     cout<<a[i]<<" ";
 }
 return 0;
}

/*   output  */
3 1 7 4 6 2 5 0 
h l h l h l h l          {h=high,l=low}  it is in wave form;
