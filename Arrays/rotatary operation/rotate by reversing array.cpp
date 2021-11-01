#include <iostream>

using namespace std;

void reverse(int a[],int start,int end){
    
     while(start<end)
     {
         int temp=a[start];
         a[start]=a[end];
         a[end]=temp;
         start++;
         end--;
     }
     
}
void leftrotate(int a[],int d,int n)
{    if(d>n)
      d=d%n;
   
    reverse(a,0,d-1);
    reverse(a,d,n-1);
    reverse(a,0,n-1);
     
}
int main()
{
   int a[]={1,2,3,4,5,6,7};
  int n=sizeof(a)/sizeof(a[0]);
   int d;
   scanf("%d",&d);
   leftrotate(a,d,n);
   for(int i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }

    return 0;
}

/****input ****/
2              // d value  i.e no of  rotations
  
  
  /**********out put********/
  3 4 5 6 7 1 2
