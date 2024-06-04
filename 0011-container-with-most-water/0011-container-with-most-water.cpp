class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1,mx=0;
        while(l < r)
        {
            int ar = min(height[l],height[r]) * (r - l);
            mx = max(ar,mx);
            if(height[l] < height[r])
                l++;
            else
                r--;
        }
        return mx;
    }
};