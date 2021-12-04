#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int k;
    cin>>k;
    for(int i=0;i<n;i++)
    {                        // matrix should be in sorted 
                            // row and column wise.
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    
    int r=0,c=m-1;
    bool f=false;
    while(r<n&&c>=0)
    {
        if(a[r][c]==k)
         {f=true;
         break;}
         
         else if(a[r][c]>k)
         c--;
         else
         r++;
    }
    if(f)
    cout<<"element found";

   return 0;

}