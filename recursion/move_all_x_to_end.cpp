#include<iostream>
using namespace std;

string move(string s)
{
    if(s.length()==0)
     return "";
     char ch=s[0];
     string ans=move(s.substr(1));
     if(ch=='x'||ch=='X')
      return ans+ch;
      else
      return (ch+ans);
}


int main()
{
    string s="axxbdxcefxhxi";
    cout<<move(s);
    return 0;
}