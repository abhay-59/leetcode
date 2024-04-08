class Solution {
public:
    int modd=1000000007;
    int solve(int s,int n,int abs,int late,vector<vector<vector<int>>>&dp){
        if(s>=n)return 1;
        if(dp[s][abs][late]!=-1)
        return dp[s][abs][late];
        long long int p=0,l=0,ab=0;
        if(abs==0){ //abs 0 or 1
            p=solve(s+1,n,0,0,dp);
            if(late<2){
                l=solve(s+1,n,0,late+1,dp);
            }
            ab=solve(s+1,n,1,0,dp);
        }
        else{
            p=solve(s+1,n,1,0,dp);
            if(late<2){
                l=solve(s+1,n,1,late+1,dp);
            }
            ab=0;
        }
        p=p%modd;
        l=l%modd;
        ab=ab%modd;
        int total=(p+l+ab)%modd;
        return dp[s][abs][late]=total;
    }
    int checkRecord(int n) {
        ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(3,-1)));
        return solve(0,n,0,0,dp);//start,end,abs,late
    }
};