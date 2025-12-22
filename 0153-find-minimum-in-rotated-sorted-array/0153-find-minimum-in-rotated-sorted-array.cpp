class Solution {
public:
    int findMin(vector<int>& nums) 
    {
        int n=nums.size();
        int l=0;
        int r=n-1;
        if(n==2)
        {
            return min(nums[0],nums[1]);
        }
        while(l<=r)
        {
            if (nums[l] <= nums[r])
                return nums[l];
            int mid=l+(r-l)/2;
            int prev=nums[(mid+n-1)%n];
            int next=nums[(mid+1)%n];
            if(nums[mid]<=prev&&nums[mid]<=next)
            {
                return nums[mid];
            }
            if(nums[mid]>=nums[l])
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        return nums[0];
    }
};