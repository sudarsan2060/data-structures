/*
You are given a list of integers nums. You can reduce the length of nums by taking any two integers, removing them, and appending their sum to the end. The cost of doing this is the sum of the two integers you removed.

Return the minimum total cost of reducing nums to one integer.

Constraints

n ≤ 100,000 where n is length of nums.

*/

int solve(vector<int>& nums) {
    
    if(nums.size()==0)
    return 0;
    
     int cost=0;
  priority_queue<int, vector<int>, greater<int> > pq;

  for(int i=0;i<nums.size();i++)
  {
      pq.push(nums[i]);
  }

  while(pq.size()>1)
  {
      int k=pq.top();
      pq.pop();
      k+=pq.top();
      pq.pop();

      cost+=k;
      pq.push(k);
  }
     
    return cost;

}
