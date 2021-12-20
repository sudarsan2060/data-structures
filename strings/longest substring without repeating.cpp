class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        vector<int> p(256,-1);
        if(n==0)
            return 0;
        int maxl=0,start=-1;
        
        for(int i=0;i<n;i++)
        {
            if(p[s[i]]>start)
                start=p[s[i]];
            p[s[i]]=i;
             
            maxl=max(maxl,i-start);
            
        }
        
        return maxl;
        
        
    }
};
