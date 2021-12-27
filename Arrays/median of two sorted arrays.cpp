/* time complexity =O(m+n) , space complexity =O(m+n)  */

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
      int n=nums1.size();
     int m=nums2.size();
        vector<int> p;
        int i=0,j=0;
        while(i<n&&j<m)
        {
            if(nums1[i]<nums2[j])
              {  p.push_back(nums1[i]);
                    i++;
              }
            
             else if(nums1[i]>=nums2[j])
              {  p.push_back(nums2[j]);
              j++;
              }
            
        }
        
        while(i<n)
        {
               p.push_back(nums1[i]);
              i++;
        }
         
 
        while(j<m)
        {
            p.push_back(nums2[j]);
             j++;
        }
         
 
          double mid=0;
        
        if((m+n)%2==0)
        {
            int k=(m+n)/2;
            mid=(p[k]+p[k-1])/2.0;
            
        }
        else
        {
             int k=(m+n)/2;
             mid=p[k];
        }
        
        return mid;
    }
};
