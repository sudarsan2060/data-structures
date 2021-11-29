string solve(string str) {
    
    str.insert(str.end(),' ');
    int n=str.length();

     int s,l;
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]==' ')
        { 
            s=j;l=i-1;
            while(s<l)
          {
             swap(str[s],str[l]);
              s++;
              l--;
            }
            j=i+1;
        }
        
    }
    str.pop_back();

    s=0; l=str.length()-1;
      while(s<l)
    {
         swap(str[s],str[l]);
         s++;
         l--;
    }
     

    return str;
}
