class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        int st=0,e=0,mx=1;
        for(int i=1;i<n;i++)
        {
            dp[i][i]=1;
            for(int j=0;j<i;j++)
            {
                if(s[i]==s[j] && (i-j<3 || dp[j+1][i-1]))
                {
                    dp[j][i]=1;
                    if(i-j+1>mx)
                    {
                        mx=i-j+1;
                        st=j;
                        e=i;
                    }
                }
            }
        }
        return s.substr(st, e - st + 1);
    }
};
