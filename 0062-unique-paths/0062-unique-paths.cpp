class Solution {
public:
    vector<vector<int>>dp;
    int m,n;
    int findways(int i,int j){
        if(i>m||j>n) return 0;
        if(i==m&&j==n) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        int right=findways(i,j+1);
        int down=findways(i+1,j);
        return dp[i][j]=right+down;
    }
    int uniquePaths(int m, int n){
        this->m=m;
        this->n=n;
        dp.assign(m+1,vector<int>(n+1,-1));
        return findways(1,1);
    }
};