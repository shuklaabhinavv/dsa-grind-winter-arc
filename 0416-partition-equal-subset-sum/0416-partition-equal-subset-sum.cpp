class Solution {
public:
    vector<vector<int>>dp;
    vector<int>nums;
    int n;
    int findways(int i,int tar)
    {
        if(tar==0) return 1;
        if(i==n) return 0;
        if(dp[i][tar]!=-1) return dp[i][tar];
        int take=0;
        if(nums[i]<=tar) take=findways(i+1,tar-nums[i]);
        int nottake=findways(i+1,tar);
        return dp[i][tar]=take||nottake;
    }
    bool canPartition(vector<int>& nums) 
    {
        this->nums=nums;
        n=nums.size();
        int sum=0;
        for(auto &i:nums)sum+=i;
        if(sum%2!=0) return false;
        dp.assign(n,vector<int>((sum/2)+1,-1));
        int a=findways(0,sum/2);
        return a==0?false:true;
    }
};