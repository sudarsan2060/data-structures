/**
Given lowercase alphabet strings s and t of the same length, return whether there's some anagram of s, say a, and some anagram of t, say b, such that:

a[i] ≤ b[i] for all 0 ≤ i < n or
b[i] ≤ a[i] for all 0 ≤ i < n.
**/

bool helper(string s,string t)
{
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>t[i])
         return false;
    }

    return true;
}

bool solve(string s, string t) {
    
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
 
    return helper(s,t)||helper(t,s);
    
    
}

t.c=o(nlogn);
