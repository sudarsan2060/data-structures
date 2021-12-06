#include<bits/stdc++.h>
using namespace std;

void move(string s,string ans)
{
    if(s.length()==0)
    {
           cout<<ans<<endl;
     return ;

    }
     char ch=s[0];
     int code=ch;
      move(s.substr(1),ans);
      move(s.substr(1),ans+ch);
      move(s.substr(1),ans+to_string(code));  // to get ASCII VALUES substrings 
       
}


int main()
{
    string s="abc";
   move(s,"");
    return 0;
}