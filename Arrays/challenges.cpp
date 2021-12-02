#include<iostream>
using namespace std;
/*           
   maximu till i elements            

int main()
{
    int a[]={0,-9,1,3,-4,5};
    int n=sizeof(a)/sizeof(a[0]);

    int max=a[0];
    for(int i=0;i<n;i++)
    {
        if(max<a[i])
         max=a[i];

        cout<<max<<" ";
    }

 return 0;
} */

  /*   subarray vs  subsequence   

  no of sub arrays= n*(n+1)/2  
  
  
  no of sub sequence arrays = 2^n
  */

  /*      sum of all sub arrays  
  int main()
{
  
  int a[]={1,2,0,7,2};
  int n=sizeof(a)/sizeof(a[0]);

int sum=0;
   for(int i=0;i<n;i++)
   {   
       sum=0;
       for(int j=i;j<n;j++)
       {
           sum+=a[j];
           cout<<sum<<" ";
       }
       cout<<endl;
       
   }
}


*/


/* longest arithimatic sub array   *//*

 int main()
{
  
  int a[]= {10,7,4,6,8,10,11};
  int n=sizeof(a)/sizeof(a[0]);


int ans=2,pd=a[1]-a[0],j=2,cu=2;
   for(int i=2;i<n;i++)
   {  
      if(pd==(a[i]-a[i-1]))
      {
          cu++;
       }

       else{
           pd=a[i]-a[i-1];
           cu=2;
       }
       ans=max(ans,cu);
    }

    cout<<ans<<endl;

   return 0;
}

*/

/*    record breaking */

 int main()
{
  
  int a[]={1,2,0,7,2,0,2,8};
  int n=sizeof(a)/sizeof(a[0]);

int max=a[0],count=0;
if(n==1)
{
    cout<<"1"<<endl;
    return 0;
}
   for(int i=0;i<n;i++)
   {   
       
       if(max<a[i]&&a[i]>a[i+1]&&i<n-1)
       {
           count++;
           max=a[i];
       }
       if(i==n-1&&max<a[i])
       {
              count++;
       }
   }
   cout<<count<<endl;
   return 0;
}