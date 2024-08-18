class Solution {
public:
    long long solve(vector<int>&A, vector<int>&B,vector<vector<long long>>&dp,int i,int check)      {
        if(i>=A.size())return 0;
        if(dp[i][check]!=-1)return dp[i][check];
        if(!check)return dp[i][check]=A[i]+max(solve(A,B,dp,i+1,0),solve(A,B,dp,i+2,1));
        return dp[i][check]=B[i]+max(solve(A,B,dp,i+2,0),solve(A,B,dp,i+1,1));
    }
    long long maxEnergyBoost(vector<int>& energyDrinkA, vector<int>& energyDrinkB) {
        long long n=energyDrinkA.size();
        vector<vector<long long>> dp(n+1, vector<long long>(2,-1));
        return max(solve(energyDrinkA,energyDrinkB,dp,0,0),
                  solve(energyDrinkA,energyDrinkB,dp,0,1));
    }
};