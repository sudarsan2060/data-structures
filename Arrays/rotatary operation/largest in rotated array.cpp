int solve(vector<int>& arr) {
    int i;
    if(arr.size()==0)
    return 0;
    if(arr.size()==1)
    return arr[0];
    for( i=0;i<arr.size();i++)
    {
        if(arr[i]>arr[i+1])
          break;
    }
    if(i<arr.size()-1)
    return arr[i];
    else
    return arr[arr.size()-1];
}
