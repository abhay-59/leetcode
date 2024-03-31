class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>=k)return 1;
        }
        vector<int>v;
        int fl=0;
        for(int i=0;i<n;i++){
            int orr=nums[i];
            for(int j=i+1;j<n;j++){
                orr=orr|nums[j];
                if(orr>=k){
                    fl=1;
                    v.push_back(j-i+1);}
            }
        }
        if(fl)
        return *min_element(v.begin(),v.end());
        return -1;
    }
};