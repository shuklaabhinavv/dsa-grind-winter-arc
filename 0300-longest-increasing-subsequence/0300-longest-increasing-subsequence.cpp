class Solution {
public:
    // int solve(vector<int>&nums,int n,int i,int prev,vector<vector<int>>&dp)
    // {
    //     if(i>=n)
    //     {
    //         return 0;
    //     }
    //     if(dp[i][prev+1]!=-1) return dp[i][prev+1];
    //     int nottake=solve(nums,n,i+1,prev,dp);
    //     int take=0;
    //     if(prev==-1||nums[i]>nums[prev])
    //     {
    //         take=1+solve(nums,n,i+1,i,dp);
    //     }
    //     return dp[i][prev+1]=max(take,nottake);
    // }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();

        // dp[i][prev+1] = LIS starting from index i
        // when previous index is prev (-1 to n-1)
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

        // Base case: dp[n][*] = 0 already

        for (int i = n - 1; i >= 0; i--) {
            for (int prev = i - 1; prev >= -1; prev--) {

                int nottake = dp[i + 1][prev + 1];

                int take = 0;
                if (prev == -1 || nums[i] > nums[prev]) {
                    take = 1 + dp[i + 1][i + 1];
                }

                dp[i][prev + 1] = max(take, nottake);
            }
        }

        // This corresponds to solve(0, -1)
        return dp[0][0];
    }
};