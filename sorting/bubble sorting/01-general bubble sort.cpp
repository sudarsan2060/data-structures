#include<iostream>
using namespace std;

void swap(int *p,int *q)
{
    int temp=*p;
    *p=*q;
    *q=temp;
}

 void bubble_sort(int a[],int n)
{
     
      
     
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1]){
            swap(&a[j],&a[j+1]);
            }
            
        } 
    }
     
}
int main(){
    int a[]={8,22,7,9,31,5,13};
    int n=sizeof(a)/sizeof(a[0]);
    bubble_sort(a,n);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    
    return 0;
}

/**************output***************/
5 7 8 9 13 22 31 
