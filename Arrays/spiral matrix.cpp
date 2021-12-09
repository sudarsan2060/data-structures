#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cin>>a[i][j];
    }

    int rs=0,re=n-1,cs=0,ce=m-1;

    while(rs<=re&&cs<=ce)
    {
     //row start
     for(int c=cs;c<=ce;c++)
     {
         cout<<a[rs][c]<<" ";
     }
     rs++;

     //end coloumn
     for(int r=rs;r<=re;r++)
     {
          cout<<a[r][ce]<<" ";
     }
     ce--;

     //row end

     for(int c=ce;c>=cs;c--)
     {
         cout<<a[re][c]<<" ";
     }
     re--;
     
     //starting column

     for(int r=re;r>=rs;r--)
     {
         cout<<a[r][cs]<<" ";

     }
     cs++;

    }
    return 0;
}

===================/**    function to store spiral order values   */ ============================

vector<int> solve(vector<vector<int>>& m ) {
    vector<int> p;
    if(m.size()==0)
    return p;
    int i=m[m.size()-1].size();
    int j=m.size();
    int rs=0,cs=0,re=j-1,ce=i-1;

     

   while(rs<=re&&cs<=ce)
    {
     //row start
     for(int c=cs;c<=ce;c++)
     {
         p.push_back(m[rs][c]);
     }
     rs++;

     //end coloumn
     for(int r=rs;r<=re;r++)
     {
          p.push_back(m[r][ce]);
     }
     ce--;

     //row end
     if(rs<=re)
     {for(int c=ce;c>=cs;c--)
     {
         p.push_back(m[re][c]);
     }
     re--;}
     
     //starting column
   if(cs<=ce)
     {for(int r=re;r>=rs;r--)
     {
       p.push_back(m[r][cs] );

     }
     cs++;}

    }
    return  p;
}*/
