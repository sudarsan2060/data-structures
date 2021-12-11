#include<bits/stdc++.h>
using namespace std;

void dnf_sort(int a[],int n)
{
    int low=0;
    int high=n-1;
    int mid=0;
    while(mid<=high)
    {
        if(a[mid]==0)
        { 
            swap(a[mid],a[low]);
            mid++;
            low++;
        }
        if(a[mid]==1)
        {
            mid++;
        }
        if(a[mid]==2)
        {
            swap(a[mid],a[high]);
            high--;
            

        }
    }
}

int main()
{
 int a[]={1,0,2,1,0,1,2,1,2};
 int n=sizeof(a)/sizeof(a[0]);

 dnf_sort(a,n);
 for(int i=0;i<n;i++)
 {
     cout<<a[i]<<" ";
 }
 return 0;
}

/**output*//
  0 0 1 1 1 1 2 2 2 
  
