#include <iostream>

using namespace std;

void swap(int *p,int *q)
{
    int temp=*p;
    *p=*q;
    *q=temp;
}

void selctionsort(int a[],int n)
{
    int min,i,j;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
             min=j;
            
            
        }swap(&a[min],&a[i]);
    }
}
int main()
{
     int a[]={3,7,2,6,10,5};
     int n=sizeof(a)/sizeof(a[0]);
     selctionsort(a,n);
     for(int i=0;i<n;i++)
     cout<<a[i]<<" ";

    return 0;
}
/************output******/
2 3 5 6 7 10 
  
  
