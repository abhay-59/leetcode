class Solution {
public:
    int solve(string&s,string&t,int ind1,int ind2,vector<vector<int>>&dp){
        if(ind1<0 || ind2<0)return 0;
        if(dp[ind1][ind2]!=-1)return dp[ind1][ind2];
        if(s[ind1]==t[ind2])
        return dp[ind1][ind2]=1+solve(s,t,ind1-1,ind2-1,dp);
        return dp[ind1][ind2]=max(solve(s,t,ind1-1,ind2,dp),solve(s,t,ind1,ind2-1,dp));
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n1=text1.size(),n2=text2.size();
        vector<vector<int>> dp( n1, vector<int> (n2,-1));
        return solve(text1,text2,n1-1,n2-1,dp);
    }
};