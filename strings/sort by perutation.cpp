vector<string> solve(vector<string>& lst, vector<int>& p) {
    
    if(p.size()==0)
     return lst;
     int i=0;
     while(i<p.size())
     {
         if(p[i]==i)i++;
         else
         {
             swap(lst[i],lst[p[i]]);
             swap(p[i],p[p[i]]);
         }
     }
     return lst;
}
