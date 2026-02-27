class Solution {
private:
    int rows, cols;
    vector<vector<int>>grid;
    vector<vector<int>>dp;
public:
    int findways(int i,int j){
        if(i>=rows||j>=cols) return 0;
        if(grid[i][j]==1) return 0;
        if(i==rows-1&&j==cols-1) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j]=findways(i+1,j)+findways(i,j+1);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        rows = grid.size();
        cols = grid[0].size();
        this->grid = grid;
        dp.assign(rows+1,vector<int>(cols+1,-1));
        return findways(0,0);
    }
};