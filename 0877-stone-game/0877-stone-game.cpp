class Solution {
public:
    int solve(vector<int>& piles,int i,int j,bool f,vector<vector<int>> &dp){
        if(i>j || i<0 || j>piles.size())
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        if(f)
            return dp[i][j]=max(piles[i]+solve(piles,i+1,j,!f,dp),piles[j]+solve(piles,i,j-1,!f,dp));
        
        return dp[i][j]=min(solve(piles,i+1,j,!f,dp)-piles[i],solve(piles,i,j-1,!f,dp)-piles[j]);
    }
    bool stoneGame(vector<int>& piles) {
        int n=piles.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return solve(piles,0,n-1,1,dp)>0;
    }
};