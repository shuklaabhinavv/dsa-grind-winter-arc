class Solution {
public:
    int solve(int n,vector<int>&dp,vector<int>&nums)
    {
        if(n<0)
        {
            return 0;
        }
        if(dp[n]!=-1) return dp[n];
        int take=nums[n]+solve(n-2,dp,nums);
        int nottake=solve(n-1,dp,nums);
        return dp[n]=max(take,nottake);
    }
    int rob(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>dp(n+1,-1);  
        int a=solve(n-1,dp,nums);
        int b=solve(n-1,dp,nums);
        return max(a,b);
    }
};