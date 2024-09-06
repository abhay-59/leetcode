class Solution {
public:
    int maxProduct(vector<int>& nums) {
        long long int mx=INT_MIN;
        long long int p1=1,p2=1;
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            if(!p1)p1=1;
            if(!p2)p2=1;
            p1*=nums[i];
            p2*=nums[n-i-1];
            mx=max(mx,max(p1,p2));
            //sum=max(zero,sum);
        }
        return mx;
    }
};