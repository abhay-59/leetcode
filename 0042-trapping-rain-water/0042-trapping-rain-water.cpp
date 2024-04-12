class Solution {
public:
    int trap(vector<int>& height) {
        ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
        int n=height.size();
        int l=0,r=n-1;
        int maxright=height[r],maxleft=height[l],sum=0;
        while(l<r)
        {
            if(maxleft<maxright)
            {
                l++;
                maxleft=max(maxleft,height[l]);
                sum+=max(0,maxleft-height[l]);
            }
            else
            {
                r--;
                maxright=max(maxright,height[r]);
                sum+=max(0,maxright-height[r]);
            }
        }
        return sum;
    }
};