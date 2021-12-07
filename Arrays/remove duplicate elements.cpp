vector<int> solve(vector<int>& nums) {
  map<int,int> mp;
   for(int i=0;i<nums.size();i++)
    mp[nums[i]]++;

    int cur=0;
    for(int i=0;i<nums.size();i++)
    {
        if(mp[nums[i]]==1)
        nums[cur++]=nums[i];
    }
    nums.resize(cur);
 
     return nums;
}
