class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
        if (k == 0) return 0;
        int n = nums.size(), prod = 1,cnt=0;
        int l = 0, r = 0;
        while(r < n)
        {
            prod*= nums[r++];
            while(l < r && prod >= k)
                prod/= nums[l++];
            cnt += (r - l);
        }
        return cnt;
    }
};