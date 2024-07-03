class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n=nums.size();
        if(nums.size()<=4)return 0;
        sort(nums.begin(), nums.end());
        int k=n-3;
        int ans=nums[n-1]-nums[0];
        for(int i=k-1;i<n;i++) {
            ans = min(ans,nums[i]-nums[i-k+1]);
        }
        return ans;
    }
};