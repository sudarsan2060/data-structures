void fun(vector<vector<int>>& matrix,int i,int j)
{
  int c=matrix[0].size();
  int r=matrix.size();
  int a=i,b=j;
  vector<int>p;
  while(a<r&&b<c)
  {
      p.push_back(matrix[a][b]);
      a++;
      b++;

  }
  
  sort(p.begin(),p.end());
  reverse(p.begin(),p.end());
  a=i;b=j;
   while(a<r&&b<c)
  {
       matrix[a][b]=p.back();
       p.pop_back();
       a++;
       b++;
  }
}
vector<vector<int>> solve(vector<vector<int>>& matrix) {
    
   int c=matrix[0].size();
   int r=matrix.size();

     for(int i=0;i<=r-1;i++)
   {
       fun(matrix,i,0);
   }
   
       for(int j=0;j<=c-1;j++)
       {
           fun(matrix,0,j);
       }
   
   return matrix;
}
