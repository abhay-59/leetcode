class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>v;
        long long prod=1;
        int ind=0,flag=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                flag=1;
                ind++;
            }
            else prod*=nums[i];
        }
        if(ind==nums.size()){
            return nums;
        }
        if(ind>1){
            fill(nums.begin(), nums.end(), 0);
            return nums;
        }
        if(flag){
            cout<<"case1"<<endl;
            for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                v.push_back(prod);
            }
                else{
                    v.push_back(0);
                }
        }
        }
        else{
            cout<<"case2"<<endl;
            for(auto i:nums){
            v.push_back(prod/i);
        }
        }
        
        return v;
    }
};