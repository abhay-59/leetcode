class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1,mid;
        while(l<=r) {
            mid=(l+r)/2;
            if(nums[mid]==target || nums[l]==target || nums[r]==target) return true;
            if(nums[l]==nums[mid] && nums[mid]==nums[r]){
                l++;
                r--;
            }
            else if(nums[l]<=nums[mid]) {
                if(target>=nums[l] && target<=nums[mid]) {
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            else {
                if(target<=nums[r] && target>=nums[mid]) {
                    l=mid+1;
                }
                else {
                    r=mid-1;
                }
            }
        }
        return false;
    }
};