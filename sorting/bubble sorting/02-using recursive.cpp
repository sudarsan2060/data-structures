#include<iostream>
using namespace std;
void swap(int *p,int *q)
{
    int temp=*p;
    *p=*q;
    *q=temp;
}
 int  bubble_sort(int a[],int n)
{
     
     if(n==1)
     return 0;
     
    else{
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1]){
            swap(&a[j],&a[j+1]);
            }
            
        }
          bubble_sort(a,n-1);
    }
  return 0;   
}
int main(){
    int a[]={8,22,7,9,31,5,13};
    int n=sizeof(a)/sizeof(a[0]);
    bubble_sort(a,n);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    
    return 0;
}
