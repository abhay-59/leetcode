class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>v;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                v.push_back(sum);
            }
        }
        //for(auto i:v)cout<<i<<" ";
        sort(v.begin(), v.end());
        int ans = 0;
        int MOD = 1000000007;
        --left;
        for (int i = left; i < right; i++) {
            ans = (ans + v[i]) % MOD;
        }
        return ans;
    }
};