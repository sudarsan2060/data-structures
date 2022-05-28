/*
Given two lowercase alphabet strings s1 and s2, determine if s1 is a subsequence of s2.

Constraints

n ≤ 100,000 where n is the length of s1
m ≤ 100,000 where m is the length of s2
*/

bool solve(string s1, string s2) {
    
    
    int j=0;
    int i=0;
    while(j<s2.size()&&i<s1.size())
    {
         if(s2[j]==s1[i])
         {
             i++;
         }
         j++;
    }

    return i==s1.size();
}
