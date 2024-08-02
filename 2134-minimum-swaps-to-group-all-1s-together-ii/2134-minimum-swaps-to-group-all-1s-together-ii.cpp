class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int count=0,n=nums.size();
        for(auto i:nums){
            if(i==1)count++;
        }
        vector<int>nums1=nums;
        for(auto i:nums){
            nums1.push_back(i);
        }
        n=nums1.size();
        int cur=0;
        for(int i=0;i<count;i++){
            cur+=nums[i];
        }
        int mx=0;
        for(int i=0;i<(n-count);i++){
            cur-=nums1[i];
            cur+=nums1[i + count];
            mx=max(cur,mx);
        }
        return count-mx;
    }
};