int solve(vector<int>& nums) {
    
     int res=0,left=0,right=0;

     for(int i=1;i<nums.size();i++)
     {
         if(nums[i]>nums[i-1])
         {
             if(right!=0)
              left=0;

             right=0;
             left++;
         }
         else if(nums[i]==nums[i-1])
         {
             left=0;
             right=0;
         }
         else
         {
             if(left!=0)
             {
                 right++;
                 res=max(res,left+right+1);
             }
         }

     }

    return res;
}
