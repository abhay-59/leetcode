class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        int prev=nums[0];
        int prev1=0;
        int curi=0;
        for(int i=1;i<n-1;i++)
        {
            int take=nums[i]+prev1;
            int no=0+prev;
            curi=max(take,no);
            prev1=prev;
            prev=curi;
        }
        //return prev;
        int pre=nums[1];
        int pre1=0;
        int cur=0;
        for(int i=2;i<n;i++)
        {
            int take=nums[i]+pre1;
            int no=0+pre;
            cur=max(take,no);
            pre1=pre;
            pre=cur;
        }
        return max(prev,pre);
    }
};