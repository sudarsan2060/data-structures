 
 #include<iostream>
 using namespace std;

 string keyarr[]={"","","abc","def","ghi","jkl","mno","pqr","stu","vxyz"};

 void keypad(string s,string ans)
 {
     if(s.length()==0)
     {
         cout<<ans<<endl;
         return;
     }

     char ch=s[0];
     string code=keyarr[ch-'0'];
     for(int i=0;i<code.length();i++)
     {
         keypad(s.substr(1),ans+code[i]);

     }
 }

 int main()
 {
     keypad("23","");
     return 0;
 }
