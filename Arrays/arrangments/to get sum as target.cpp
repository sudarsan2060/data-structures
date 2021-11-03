
#include <iostream>

using namespace std;
class arrange{
    public:
    void find(int a[],int n,int target);
     
};

void arrange::find(int a[],int n,int target)
{   
    int i=0,j;
     
    for(i;i<n;i++)
    for(j=i+1;j<n;j++){
    {
        if(a[i]+a[j]==target)
        {
             cout<<"["<<i<<","<<j<<"]"<<endl;
        }
    }
    
    }
    
}
 
 
int main()
{
     int a[]={1,2,7,4,6,11,15};
     int n=sizeof(a)/sizeof(a[0]);
     int target;
     cin>>target;
     arrange case1; 
     case1.find(a,n,target);
      
     

    return 0;
}

/**************output************/

13
[1,5]
[2,4]
