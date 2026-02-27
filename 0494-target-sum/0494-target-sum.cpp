class Solution {
private:
    vector<int>nums;
    vector<vector<int>>dp;
    int n;
    int offset;
public:
    int findways(int i,int tar)
    {
        if(abs(tar) > offset) return 0;
        if(i == n)
            return tar == 0;
        if(dp[i][tar+offset]!=-1) return dp[i][tar+offset];
        int plus=findways(i+1,tar-nums[i]);
        int minus=findways(i+1,tar+nums[i]);
        return dp[i][tar+offset]=plus+minus;
    }
    int findTargetSumWays(vector<int>& nums, int target) 
    {
        this->nums=nums;
        n=nums.size();
        int sum=0;
        for(auto &it:nums)
        {
            sum+=it;
        }
        if(abs(target)>sum)
        {
            return 0;
        }
        offset=sum;
        dp.assign(n,vector<int>((2*sum)+1,-1));
        return findways(0,target);
    }
};