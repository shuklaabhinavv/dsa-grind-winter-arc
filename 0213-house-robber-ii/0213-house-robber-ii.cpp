class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        vector<int> dp1(n,-1);
        vector<int> dp2(n,-1);
        dp1[0]=nums[0];
        dp2[0]=nums[1];
        int a=findway(0,n-2,nums,dp1);
        int b=findway(1,n-1,nums,dp2);
        return max(a,b);
    }
    int findway(int n,int i,vector<int> &nums,vector<int> &dp)
    {
        if(i==n) return nums[i];
        if(i<n) return 0;
        if(dp[i]!=-1) return dp[i];
        int take=nums[i]+findway(n,i-2,nums,dp);
        int nottake=findway(n,i-1,nums,dp);
        return dp[i]=max(take,nottake);
    }
};