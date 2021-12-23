/** given  two numbers as string  return sum of two numbers as string  **/


string solve(string a, string b) {
    int carry=0;

    if(a.length()<b.length()) 
    swap(a,b);

    string str="";

    int i=a.length()-1,j=b.length()-1;

    while(i>=0 && j>=0){
        int n=a[i]+b[j]+carry-96;
        carry=n/10;
        n=n%10;
        str+=to_string(n);
        i--,j--;
    }
    while(i>=0){
        int n=a[i]+carry-48;
        carry=n/10;
        n=n%10;
        str+=to_string(n);
        i--;
    }
    if(carry) 
    str+=to_string(carry);
    
    reverse(str.begin(),str.end());
    return str;
}
