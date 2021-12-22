/* Given a lowercase alphabet string s, return the total number of substrings that contain one unique character.*/

int solve(string s) {

    if(!s.length()) 
     return 0;

    int count=1,res=0;

    for(int i=1;i<s.length();i++){
       
        if(s[i]==s[i-1]) 
         count++;
         
        else
        {
             res+=count*(count+1)/2;
             count=1;
         }
    }
    return res+count*(count+1)/2;
}
