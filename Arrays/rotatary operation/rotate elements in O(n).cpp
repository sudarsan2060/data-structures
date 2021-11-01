#include <iostream>

using namespace std;

 void leftrotate(int a[],int n,int d)
 {
     int mod=d%n;
     for(int i=0;i<n;i++)
     {
         cout<<a[(mod+i)%n]<<" ";
     }
 }
int main()
{
    int a[]={5,6,1,3,6,1,4};
    int n=sizeof(a)/sizeof(a[0]);
      leftrotate(a,n,4);
    return 0;
}
/*************output****************/

6 1 4 5 6 1 3 
