#include<iostream>
using namespace std;

 void merge(int arr[],int l,int m,int r)
 {
     int n1=m-l+1;
     int n2=r-m;
     int a[n1];
     int b[n2];

     for(int i=0;i<n1;i++)
     {
         a[i]=arr[l+i];
     }
     for(int i=0;i<n2;i++)
     {
         b[i]=arr[m+1+i];
     }
     int i=0,j=0,k=l;
     while(i<n1&&j<n2)
     {
         if(a[i]<=b[j])
         {
             arr[k]=a[i];
             k++;i++;
         }
         else
         {
             arr[k]=b[j];
             k++;
             j++;

         }
     }
     while(i<n1)
     {
          arr[k]=a[i];
             k++;i++;
     }
     while(j<n2)
     {
        arr[k]=b[j];
             k++;
             j++;
     }

 }


void mergesort(int a[],int l,int r)
{
    if(l>=r)
    {
            return;
    }
     
        int mid= l+(r-l)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,r);

        merge(a,l,mid,r);
      
 }
    

int main()
{
  int arr[]={12,11,13,5,6,7};
 int n=sizeof(arr)/sizeof(arr[0]);
  mergesort(arr,0,n-1); 

  for(int i=0;i<n;i++)
  cout<<arr[i]<<" ";

  return 0;

}