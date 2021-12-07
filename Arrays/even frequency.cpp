bool solve(vector<int>& nums) {
    
    if(nums.size()==1)
    return false;

    sort(nums.begin(),nums.end());
      int count=0;
   
    for(int i=0;i<nums.size();i++)
    {
      if(nums[i]==nums[i+1])
      count++;

      else
      {
         if(count%2==0)
           return false;

          count=0;
      }
    }
    if(nums[nums.size()-1]==nums[nums.size()-2])
      count++;
     if(count%2==0)
    return false;

   
  
  return true;

}
