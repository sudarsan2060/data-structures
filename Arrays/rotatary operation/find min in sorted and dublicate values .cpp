
#include <iostream>

using namespace std;

int findminimum(int a[],int low,int high)
{
    
    while(high>low)
    {
        int mid=(high+low)/2;
        if(a[high]==a[mid])
         high--;
         
        else if(a[high]>a[mid])
           high=mid;
        else
        low=mid+1;
    }
    
    return a[high];
    
    
}
int main()
{
    int a[]={5,6,1,3,6,1,4};
    int n=sizeof(a)/sizeof(a[0]);
     cout<<findminimum(a,0,n-1);
    return 0;
}
/*************output***********/
1
