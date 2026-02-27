class Solution {
public:
    vector<int>coins;
    int n;
    vector<vector<int>>dp;
    int findways(int amount, int i){
        if(amount==0) return 0;
        if(i==coins.size())return INT_MAX-1;
        if(dp[amount][i]!=-1) return dp[amount][i];
        int take=INT_MAX;
        if(amount>=coins[i]) take=1+findways(amount-coins[i],i);
        int nottake=findways(amount,i+1);
        return dp[amount][i]=min(take,nottake);
    }
    int coinChange(vector<int>& coins, int amount) {
        this->coins = coins;
        n = coins.size();
        dp.assign(amount+1,vector<int>(n+1,-1));
        int a=findways(amount,0);
        return (a==INT_MAX||a==INT_MAX-1)?-1:a;
    }
};