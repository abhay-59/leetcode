class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
        if(k<=1)return 0;
        int n = nums.size();
        int ans = 0;
        for(int i=0;i<n;i++){
            int prod = 1;
            int curr = 0;
            for(int j=i;j<n;j++){
                prod *= nums[j];
                if(prod >= k)break;
                curr += 1;
            }
            ans += curr;
        }
        return ans;
    }
};