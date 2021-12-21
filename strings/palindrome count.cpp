// how many palindromes can be formed with charcters from the given string //

int solve(string s, int k) {           // k is length of palindrome
    set<char> temp;
    int n=s.length();
    for(int i=0;i<n;++i)
    {
        temp.insert(s[i]);
    }
    if(k%2==0) 
    return (pow(temp.size(),k/2)+0.5);
    else 
    return (pow(temp.size(),k/2+1)+0.5);
}
