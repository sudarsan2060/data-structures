#include <iostream>

using namespace std;

int sendt(int a[],int n){
     int count=0;
     for(int i=0;i<n;i++){
         if(a[i]!=0)
         a[count++]=a[i];
     }
     while(count <n){
         a[count++]=0;
     }
    return 0;
}
int main()
{    int a[]={1,2,0,3,0,0,4,5,7,0,9};
 int n=sizeof(a)/sizeof(a[0]);
 
 sendt(a,n);
 for(int i=0;i<n;i++)
 cout<<a[i]<<" ";
     

    return 0;
}


/*********output************/
1 2 3 4 5 7 9 0 0 0 0 
