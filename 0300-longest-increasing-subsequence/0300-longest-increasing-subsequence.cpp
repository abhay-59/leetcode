class Solution {
public:
    int lis(int ind, int prev, vector<int>& nums, vector<vector<int>>& dp) {
        int n = nums.size();
        if (ind == n)
            return 0;
        if (dp[ind][prev + 1] != -1)
            return dp[ind][prev + 1];
        int nottake = 0, take = 0;
        nottake = 0 + lis(ind + 1, prev, nums, dp);
        if (prev == -1 || nums[ind] > nums[prev])
            take = 1 + lis(ind + 1, ind, nums, dp);
        return dp[ind][prev + 1] = max(take, nottake);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size(), mx = 1;
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
        return lis(0, -1, nums, dp);
        // vector<int>dp(n,1);
        // for(int i=0;i<n;i++)
        // {
        //     for(int prev=0;prev<i;prev++)
        //     {
        //        if(nums[prev]<nums[i])
        //        {
        //            dp[i]=max(dp[i],1+dp[prev]);
        //        }
        //     }
        //     mx=max(mx,dp[i]);
        // }
        // return mx;
    }
};