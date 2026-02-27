class Solution {
private:
    vector<int> nums;
    int n;
public:
    int solve(int start, int end, int i, vector<int>& dp) {
        if(i < start) return 0;
        if(dp[i] != -1) return dp[i];
        int take = nums[i] + solve(start, end, i - 2, dp);
        int nottake = solve(start, end, i - 1, dp);
        return dp[i] = max(take, nottake);
    }
    int rob(vector<int>& nums) {
        this->nums = nums;
        n = nums.size();
        if(n == 1) return nums[0];
        vector<int> dp1(n, -1);
        vector<int> dp2(n, -1);
        int case1 = solve(0, n-2, n-2, dp1);
        int case2 = solve(1, n-1, n-1, dp2);
        return max(case1, case2);
    }
};