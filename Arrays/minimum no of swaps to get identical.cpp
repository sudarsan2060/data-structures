int solve(vector<int>& lst0, vector<int>& lst1) {
    int i=0,count=0;

    while(i<lst1.size()-1)
    {
        if(lst0[i]==lst1[i]) 
        i++;

        else{
            
            int j;
            for(j=i+1;j<lst1.size() && lst0[j]!=lst1[i];j++);
            while(j>i){
                swap(lst0[j],lst0[j-1]);
                j--;
                count++;
            }
            i++;
        }
         
    }
    return count;
}
