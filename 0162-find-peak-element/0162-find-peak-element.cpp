class Solution {
public:
    int findPeakElement(vector<int>& nums) 
    {
        int n=nums.size();
        int l=0;
        int r=n-1;
        if(n==1)
        {
            return 0;
        }
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(mid==0)
            {
                if(nums[mid]>nums[mid+1])
                {
                    return mid;
                }
            }
            if(mid==n-1)
            {
                if(nums[mid]>nums[mid-1])
                {
                    return mid;
                }
            }
            if(nums[mid]>nums[(mid+1)%n]&&nums[mid]>nums[(mid+n-1)%n])
            {
                return mid;
            }
            else if(nums[mid]<nums[(mid+1)%n])
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        return -1;
    }
};