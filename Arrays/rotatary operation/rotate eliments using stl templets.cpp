#include<bits/stdc++.h>
#include <iostream>

using namespace std;

 void leftrotate(int a[],int n,int d)
 { 
     rotate(a,a+d%n,a+n);
     
     
     
     for(int i=0;i<n;i++) 
     cout<<a[i]<<" ";
 }
int main()
{
    int a[]={5,6,1,3,6,1,4};
    int n=sizeof(a)/sizeof(a[0]);
      leftrotate(a,n,5);
    return 0;
}


/*****************out put******/

1 4 5 6 1 3 6 
