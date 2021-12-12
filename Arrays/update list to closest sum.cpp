int sum(vector<int>&v,int r){
    int ans=0;
    for(int i=0;i<v.size();i++){
        if(v[i]>r) ans+=r;
        else ans+=v[i];
    }
    return ans;
}

int solve(vector<int>& nums, int target) {
    int l=0,r=*max_element(nums.begin(),nums.end());
    int ans=INT_MAX,res;
    while(l<=r){
        int mid=l+(r-l)/2;
        int s=sum(nums,mid);
        if(abs(ans-target)>abs(s-target)){
            res=mid;
            ans=s;
        }
        if(abs(ans-target)==abs(s-target))
          res=min(res,mid);
      
        if(s==target) 
          break;
      
        if(s>target) 
          r=mid-1;
      
        else 
          l=mid+1;
    }
    return res;
}
