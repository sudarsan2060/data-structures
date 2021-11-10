#include <bits/stdc++.h>

using namespace std;
string returnflot(string str)
{
    int pos=str.find("."); 
    if(pos==string::npos)
    return "0";
    else
    return str.substr(pos+1);
}
bool isdigits(string str)
{
    for(int i=0;i<str.length();i++)
    {
        if(str.at(i)<'0'||str.at(i)>'9')
           return false;
    }
    
    return true;
}
 

int main()
{
     string s;
     cin>>s;
     cout<<returnflot(s)<<"\n";
      isdigits(s)?cout<<"\n all are digits":cout<<"\n all are not dgits";
   
    return 0;
}
