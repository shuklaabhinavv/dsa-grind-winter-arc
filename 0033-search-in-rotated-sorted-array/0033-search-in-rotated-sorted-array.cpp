class Solution {
public:
    int bs(vector<int>& nums, int target,int l,int r)
    {
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            if(nums[mid]>target)
            {
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }   
        return -1;
    }
    int search(vector<int>& nums, int target) 
    {
        int n=nums.size();
        int l=0;
        int r=n-1;
        int pi=-1;
        if(n==1)
        {
            if(target==nums[0])
            {
                return 0;
            }
            else
            {
                return -1;
            }
        }
        while(l<=r)
        {
            if (nums[l] <= nums[r])
            {
                pi=l;
                break;
            }
            int mid=l+(r-l)/2;
            int prev=nums[(mid+n-1)%n];
            int next=nums[(mid+1)%n];
            if(nums[mid]<=prev&&nums[mid]<=next)
            {
                pi=mid;
                break;
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
        int a=bs(nums,target,0,pi-1);
        int b=bs(nums,target,pi,n-1);
        return max(a,b);
    }
};