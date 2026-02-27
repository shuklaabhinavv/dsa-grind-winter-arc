class Solution {
public:
    vector<int>coins;
    int n;
    vector<vector<int>>dp;
    int findways(int amount, int i){
        if(amount==0) return 1;
        if(i==coins.size())return 0;
        if(dp[amount][i]!=-1) return dp[amount][i];
        int take=0;
        if(amount>=coins[i]) take=findways(amount-coins[i],i);
        int nottake=findways(amount,i+1);
        return dp[amount][i]=take+nottake;
    }
    int change(int amount,vector<int>& coins) {
        this->coins = coins;
        n = coins.size();
        dp.assign(amount+1,vector<int>(n+1,-1));
        return findways(amount,0);
        // return (a==INT_MAX||a==INT_MAX-1)?-1:a;
    }
};