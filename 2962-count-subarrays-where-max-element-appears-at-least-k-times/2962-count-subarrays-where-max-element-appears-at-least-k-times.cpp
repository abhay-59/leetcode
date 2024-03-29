class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int num=*max_element(nums.begin(), nums.end());
        int n=nums.size();
        vector<int>v;
        for(int i=0; i<n; i++)
            if(nums[i]==num) v.push_back(i);
        int sz=v.size();
        if (sz<k) return 0;
        long long ans=1LL*(v[0]+1)*(n-v[k-1]);
        for (int i=1; i+k-1<sz; i++)
            ans+=1LL*(v[i]-v[i-1])*(n-v[i+k-1]);
        return ans;
    }
};