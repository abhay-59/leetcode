class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1)return 0;
        if(nums.size()==2){
            if(nums[0]>nums[1])return 0;
            return 1;
        }
        int fl=0,ind=0;
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1]){
                fl=1;
                return i;
            }
        }
        if(fl==0){
            int mx=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]>mx){
                    mx=nums[i];
                    ind=i;
                }
            }
        }
        return ind;
    }
};