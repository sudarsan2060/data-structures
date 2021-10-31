#include <iostream>

using namespace std;

void rotateleft(int a[],int n){
    int temp;
    temp=a[0];
    for(int i=0;i<n;i++){
        a[i]=a[i+1];
    }
    a[n-1]=temp;
}
int maxsum(int a[],int n,int maxval){
    int sum=0;
     for(int i=0;i<n;i++)
    {
        sum+=i*a[i];
    }
    if(sum>maxval)
    maxval=sum;
    
    return maxval;
    
}

int main()
{
    int a[]={10,1,2,3,4,5,6,7,8,9};
    int maxval=0;
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        
        maxval=maxsum(a,n,maxval);
        rotateleft(a,n);
    }
    cout<<maxval<<endl;

    return 0;
}

******************output**************
330
