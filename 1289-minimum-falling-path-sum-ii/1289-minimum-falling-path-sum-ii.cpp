class Solution {
public:
    int rec(int r,int c,vector<vector<int>>& grid,vector<vector<int>>&dp){
        int n=grid.size();
        if(r==n)return 0;
        if(dp[r][c]!=-1)return dp[r][c];
        int res=1e9;
        for(int i=0;i<n;i++){
            if(c!=i){
                res=min(res,grid[r][c]+rec(r+1,i,grid,dp));
            }
        }
        return dp[r][c]=res;
    }
    int minFallingPathSum(vector<vector<int>>& grid) {
        int n=grid.size(),ans=1e9;
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        for(int i=0;i<n;i++){
            ans=min(ans,rec(0,i,grid,dp));
        }
        return ans==1e9?grid[0][0]:ans;
    }
};