class Solution {
private:
    vector<int>dp;
    vector<int>nums;
    int n;
public:
    int solve(int i){
        if(i<0) return 0;
        if(dp[i]!=-1) return dp[i];
        int take=nums[i]+solve(i-2);
        int nottake=solve(i-1);
        return dp[i]=max(take,nottake);
    }
    int rob(vector<int>& nums) 
    {
        this->nums=nums;
        n=nums.size();
        dp.assign(n,-1);  
        return solve(n-1);
    }
};