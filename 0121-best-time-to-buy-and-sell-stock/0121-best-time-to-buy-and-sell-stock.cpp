class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int leftmin=prices[0];
        int ans=0;
        for(int i=1;i<n;i++)
        {
            int pft=prices[i]-leftmin;
            ans=max(pft,ans);
            leftmin=min(leftmin,prices[i]);
        }
        return ans;
    }
};