class Solution {
public:
    int solve(int n,vector<int>&dp,vector<int>&costs)
    {
        if(n<=0) return 0;
        if(dp[n]!=-1) return dp[n];
        int one=costs[n-1]+1+solve(n-1,dp,costs);
        int two=costs[n-1]+4+solve(n-2,dp,costs);
        int three=costs[n-1]+9+solve(n-3,dp,costs);
        return dp[n]=min(one,min(two,three));
    }
    int climbStairs(int n, vector<int>& costs) 
    {
        vector<int>dp(n+1,-1);
        return solve(n,dp,costs);
    }
};