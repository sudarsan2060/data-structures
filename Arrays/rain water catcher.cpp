int solve(vector<int>& nums) {
    
    int count=0;
    int n=nums.size();
    int left[n],r[n];

    if(nums.size()==0||nums.size()==1)
    return 0;
     
     left[0]=nums[0];
  
  /***************************************** make array for maxvalue for the left side  ***************/
     for(int i=1;i<n;i++)
     {
         left[i]=max(left[i-1],nums[i]);
     }
     r[n-1]=nums[n-1];
  
  /*********************************************make array for max value for right side  *******************/
     for(int i=n-2;i>=0;i--)
     {
         r[i]=max(r[i+1],nums[i]);
     }
   /**********************************************water can store upto min height so comare and take min from left and right max************/
     for(int i=0;i<n;i++)
     {
         count+= min(left[i],r[i])-nums[i];
     }
    
    return count;
    
}

