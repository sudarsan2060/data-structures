bool solve(vector<int>& nums, int s) {
    
    
    if(nums.size()==0||nums.size()==1||nums.size()==2)
        return false;
        sort(nums.begin(),nums.end());
    
     for(int i=0;i<nums.size();i++)
     {
         int l=i+1;
         int r=nums.size()-1;
         while(l<r)
         {
             if(nums[l]+nums[r]==(s-nums[i]))
              return true;
            if(nums[l]+nums[r]>(s-nums[i]))
                r--;

             if(nums[l]+nums[r]<(s-nums[i]))
               l++;
         }
     }
    return false;
}
