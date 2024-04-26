class Solution {
public:
    int rec(int r,int c,vector<vector<int>>& grid,vector<vector<int>>&dp){
        int n=grid.size();
        if(!((r >= 0 && r < n) && (c >= 0 && c < n)))return 1e9;
        if(r==n-1)return grid[r][c];
        if(dp[r][c]!=1e9)return dp[r][c];
        int res=1e9;
            int s1=(res,grid[r][c]+rec(r+1,c-1,grid,dp));
            int s2=grid[r][c]+rec(r+1,c,grid,dp);
            int s3=grid[r][c]+rec(r+1,c+1,grid,dp);
            res=min(s1,s2);
            res=min(res,s3);
        return dp[r][c]=res;
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        vector<vector<int>>grid=matrix;
        int n=grid.size(),ans=1e9;
        vector<vector<int>>dp(n,vector<int>(n+1,1e9));
        for(int i=0;i<n;i++){
            ans=min(ans,rec(0,i,grid,dp));
        }
        return ans==1e9?grid[0][0]:ans;
    }
};